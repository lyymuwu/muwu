#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct customer{
    char *name;
    unsigned long int telephone;
};


struct customer* people_creat(char* name, unsigned long int telephone);

void people_delete(int place, struct customer **pointer);

void people_search(int place, struct customer **pointer);

int main()
{
	char* name = (char*)malloc(sizeof(char));
    int place, begin, now[10];
	unsigned long int telephone;
    struct customer *all_name[10];
    struct customer **pointer = all_name;
    char *name_delete = (char*)malloc(sizeof(char));
	int number_choose;

    for(begin=0;begin<=9;begin++)
    {
        now[begin] = 0;
    }


	while(1){
		printf("this is what is now. %d %d %d %d %d %d %d %d %d %d\n", now[0], now[1], now[2], now[3], now[4], now[5], now[6], now[7], now[8], now[9]);
		printf("Please type the number you want to do.\n");
		printf("1.Add \n2.Delete\n3.Search\n0.exit\n");
		scanf("%d", &number_choose);
		if(number_choose != 1 && number_choose != 2 && number_choose != 3)
		{
			free(name_delete);
            free(name);
			break;
		}
		switch(number_choose){
		case 1:
			printf("PLease type the name and telephone and what place you want to put in.\n");
            scanf("%s %ld %d", name, &telephone, &place);
            all_name[place] = people_creat(name, telephone);
            now[place] = 1;
			printf("Adding----------\n");
			break;
		case 2:
			printf("Please type the place you want to delete.\n");
            scanf("%d", &place);
            people_delete(place, pointer);
            now[place] = 0;
			printf("Deleting--------\n");
			break;
		case 3:
			printf("please type the place you want to search.\n");
            scanf("%d", &place);
            people_search(place, pointer);
			printf("Searching--------\n");
			break;
		default:
			break;
		}
	}
	return 0;
}

struct customer* people_creat(char* name, unsigned long int telephone)
{
    struct customer* people = (struct customer*)malloc(sizeof(struct customer));
    people->name = name;
    people->telephone = telephone;
    

    return people;
}

void people_delete(int place, struct customer **pointer)
{
//	pointer[place]->name = "null";
	pointer[place]->telephone = 0;
}

void people_search(int place,struct customer **pointer)
{
    printf("%s\n",pointer[place]->name);
    printf("%ld\n",pointer[place]->telephone);
}