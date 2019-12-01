#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct LINK
{
	char* name;
    // char* number;
    struct LINK* next;
}node;

// typedef struct ppandp
// {
//     node* p;
//     node* pp;
// }PPP;

node* Add(node* first, char* name);
node* Search(node* first,char* name);
//void Delete(node* search_last);

int main()
{
    int choice;
    node* first = NULL;
    // char* phone_number = (char*)malloc(sizeof(char));
    char* name_type = (char*)malloc(sizeof(char));
    node* point;
    
    while(1)
    { 
        printf("Please type the number you want to do.\n");
        printf("1.Add  2.Delete  3.search  0.exit\n");
        scanf("%d", &choice);
    
        switch (choice)
        {
        case 1:
            printf("Please type the name and the telephone numbers\n");
            scanf("%s", name_type);
            first = Add(first, name_type);
            printf("Adding----------\n");
            printf("The name of it is %s\n", first->name);
            // printf("The phone numbers of it is %s\n",first->number);
            break;

        case 2:
            // printf("Please type the name you want to search.\n");
            // scanf("%s", name);
            // search_last = Search(name);
            // Delete(search_last);
            printf("Deleting----------\n");
            break;

        case 3:
            printf("Please type the name you want to search.\n");
            scanf("%s", name_type);
            point = Search(first, name_type);
            printf("Searching----------\n");
            printf("The name of it is %s\n", point->name);
            // printf("The phone numbers of it is %s\n",point->number);
            break;

        default:
            free(name_type);
            // free(phone_number);
            return 0;
            break;
        }
    }
    return 0;
}


node* Add(node* first,char* name)
{
    node* p = (node*)malloc(sizeof(node));
    p->name = name;
    // p->number = number;
    p->next = NULL;
    node* last = first;
    
    if(last)
    {
        while (last->next)
        {
            last = last->next;
        }
        last->next = p;
    }else
    {
        first = p;
        printf("first one\n");
    }
    return first;
}


node* Search(node* first,char* name)
{
    node* p = first;
        while(strcmp((p->name),name)!=0 && p)
        {
            p = p->next;
        }
        printf("find it\n");
        return p;
}


// void Delete(node* search_last)
// {
//     if(search_last)
//     {
//         search_last->next = search_last->next->next;
//     }
//     if(search_last->next->next == NULL)
//     {
//         last = search_last;
//     }
// }