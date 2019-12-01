#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct LINK{
struct LINK* last;
struct LINK* next;
char name;
};
void main(){
struct LINK* n1 = (struct LINK*)malloc(sizeof(struct LINK));
n1->name= "n1";
	
struct LINK* n2 = (struct LINK*)malloc(sizeof(struct LINK));
n2->name= "n2";	
n2->last = n1;	
n1->next = n2;

struct LINK* n3 = (struct LINK*)malloc(sizeof(struct LINK));
n3->name= "n3";
n3->last = n2;
n2->next = n3;
}


struct LINK* Add(char* name,struct LINK* last_one, struct LINK* next_one)
{
	struct LINK* new = (struct LINK*)malloc(sizeof(struct LINK));
	new->last = last_one;
	new->next = next_one;
	new->name = name;

	last_one->next = new;
	next_one->last = new;

	return new;
}

void Delete(struct LINK* old)
{
	struct LINK* last_one = NULL;
	struct LINK* next_one = NULL;

	last_one = old->last;
	next_one = old->next;
	
	last_one->next= next_one;
	next_one->last= last_one;
}

struct LINK* search(char name, struct LINK* n1)
{
	int i, over = 1;
	for(i=0;over=0;i++)
	{
		if(strcmp(name,n1->name)==0)
		{
			over = 0;
		}else
		{
			n1 = n1->next;
		}
	}
	return n1;
}




