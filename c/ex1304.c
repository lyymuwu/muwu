#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct customer{
    char *name;
    int telephone;
    // struct customer* next;
    // struct customer* last;
};


struct customer* people_creat(char* name, int telephone);

void people_delete(char* name, struct customer **pointer);

void people_search(int place, struct customer **pointer);

int main()
{
    char* name = (char*)malloc(sizeof(char));
    int telephone, place, begin, now[10], over=0;
    struct customer *all_name[10];
    struct customer **pointer = all_name;
    char judge_one, judge_two, judge_three, judge_four;
    char *name_delete = (char*)malloc(sizeof(char));

    // for(begin=0;begin<=9;begin++)
    // {
    //     all_name[begin]->telephone = 0;
    // }
    
    // for(begin=0;begin<=9;begin++)
    // {
    //     if(all_name[begin]->telephone == 0)
    //     {
    //         now[begin] = 0;
    //     }else
    //     {
    //         now[begin] = 1;
    //     }
        
    // }
    // printf("this is what is now. %d%d%d%d%d%d%d%d%d%d\n", now[0], now[1], now[2], now[3], now[4], now[5], now[6], now[7], now[8], now[9]);

    for(begin=0;begin<=9;begin++)
    {
        now[begin] = 0;
    }
    while(over == 0)
    {    
        printf("this is what is now. %d %d %d %d %d %d %d %d %d %d\n", now[0], now[1], now[2], now[3], now[4], now[5], now[6], now[7], now[8], now[9]);
        
        printf("Do you want to add? Y/N\n"); 
        scanf("%c", &judge_one);
        getchar();
        if(judge_one == 'Y' || judge_one == 'y')
        {
            printf("PLease type the name and telephone and what place you want to put in.\n");
            scanf("%s %d %d", name, &telephone, &place);
            all_name[place] = people_creat(name, telephone);
            now[place] = 1;
        }else
        {
            printf("OK\n");
        }
        

        printf("Do you want to delete? Y/N\n");
        scanf("%c", &judge_two);
        getchar();
        if(judge_two == 'Y' || judge_two == 'y')
        {
            printf("Please type the name you want to delete.\n");
            scanf("%s", name_delete);
            people_delete(name_delete, pointer);
        }else
        {
             printf("OK\n");
        }
        

        printf("Do you want to search the information? Y/N\n");
        scanf("%c", &judge_three);
        getchar();
        if(judge_three == 'Y' || judge_three == 'y')
        {
            printf("please type the place you want to search.\n");
            scanf("%d", &place);
            people_search(place, pointer);
        }else
        {
            printf("OK\n");
        }
        

        printf("Do you want to exit this program?\n");
        getchar();
        scanf("%c", &judge_four);
        if(judge_four == 'Y' || judge_four == 'y')
        {
            free(name_delete);
            free(name);
            over = 1;
            return 0;
        }else
        {
            printf("OK\n");
        }
        
    }
}

struct customer* people_creat(char* name, int telephone)
{
    struct customer* people = malloc(sizeof(struct customer));
    people->name = name;
    people->telephone = telephone;
    

    return people;
}

void people_delete(char* name, struct customer **pointer)
{
    int i = 1;
    int n = 0;
    while (i==1)
    {
        if(pointer[n]->name != name)
        {
            n++;
        }else{
            i = 0;
        }
    }

    printf("the position %d is empty\n", n);
    pointer[n]->name = "null";
    pointer[n]->telephone = 0;
}

void people_search(int place,struct customer **pointer)
{
    printf("%s\n",pointer[place]->name);
    printf("%d\n",pointer[place]->telephone);
}