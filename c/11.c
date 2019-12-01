#include<stdio.h>
#include<stdlib.h>

typedef struct LINK{
	int number;
	struct LINK* next;
} link;

int main()
{
    link* a = malloc(sizeof(link));
    link* b;
    b->next = a;
    b = a;
    a->number = 100;
    printf("%d",b->number);
}