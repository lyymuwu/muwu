#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct LINK
{
	char* name;
    char* number;
    struct LINK* next;
}node;

node* first = NULL;
node* last = NULL;
int judge = 0;
// if judge equals one, that's to say you want to operate the first one of the link

void Add(char* name, char* number);
node* Search(char* name);//just return the last one of you search when not the first one.
void Delete(node* search_last);

int main()
{
    int choice;
    char* phone_number = (char*)malloc(sizeof(char));
    char* name = (char*)malloc(sizeof(char));
    node* search_last;
    last = first;
    
    while(1)
    {
        phone_number = (char*)malloc(sizeof(char));
        name = (char*)malloc(sizeof(char)); 
        printf("Please type the number you want to do.\n");
        printf("1.Add  2.Delete  3.search  0.exit\n");
        scanf("%d", &choice);
    
        switch (choice)
        {
        case 1:
            printf("Please type the name and the telephone numbers\n");
            scanf("%s %s", name, phone_number);
            Add(name, phone_number);
            printf("Adding----------\n");
            break;

        case 2:
            printf("Please type the name you want to search.\n");
            scanf("%s", name);
            search_last = Search(name);
            Delete(search_last);
            printf("Deleting----------\n");
            break;

        case 3:
            printf("Please type the name you want to search.\n");
            scanf("%s", name);
            search_last = Search(name);
            printf("Searching----------\n");
            if(judge == 0 && search_last)
            {    
                printf("The name of it is %s\n",search_last->next->name);
                printf("The phone numbers of it is %s\n",search_last->next->number);
            }else if(judge == 1 && search_last)
            {
                printf("The name of it is %s\n",search_last->name);
                printf("The phone numbers of it is %s\n",search_last->number);
            }else
            {
                printf("We can't search to it.\n");
            }
            break;

        default:
            free(name);
            free(phone_number);
            return 0;
            break;
        }
    }
    return 0;
}


void Add(char* name, char* number)
{
    node* p = (node*)malloc(sizeof(node));
    p->name = name;
    p->number = number;
    if(first)
    {
        last = last->next;
        last->next = p;
    }else
    {
        first = p;
        last = p;
    }
    judge = 0;
}


node* Search(char* name)
{
    node* p = first;
    if(strcmp(first->name,name)==0)
    {
        printf("this is first of the link.\n");
        judge = 1;
        return first;
    }else
    {
        while(strcmp((p->next->name),name)!=0 && p->next)
        {
            p = p->next;
        }
        if(p->next==last && strcmp(last->name,name)!=0)
        {
            printf("You have typed a wrong name.\n");
            return NULL;
        }else
        {
            return p;
        }
        
    }
}


void Delete(node* search_last)
{
    if(judge==0 && search_last)
    {
        search_last->next = search_last->next->next;
    }else if(judge==1 && search_last)
    {
        node* point = first;
        first=first->next;
        free(point);
    }else
    {
        printf("We can't delete that.\n");
    }
    if(search_last->next->next == NULL)
    {
        last = search_last;
    }
    judge = 0;
}