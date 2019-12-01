#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct LINK
{
	char* name;
    char* number;
    struct LINK* next;
}node;

node* Add(node* first,char* name, char* number);


int main()
{
    node* first = NULL;
    int i;

    for(i=0;i<=1;i++)
    {
        char* name = (char*)malloc(sizeof(char));
        char* number = (char*)malloc(sizeof(char));
        scanf("%s",name);
        scanf("%s",number);
        printf("%s %s\n", name, number);
        first = Add(first,name,number);
        printf("first is %s\n",first->name);
    }
    
    
    return 0;
}




node* Add(node* first,char* name, char* number)
{
    node* p = (node*)malloc(sizeof(node));
    p->name = name;
    p->number = number;
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