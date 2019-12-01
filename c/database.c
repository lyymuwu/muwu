#include<stdio.h>
#include<stdlib.h>
#include"database.h"


//this is the first database I try the make.
//ths database used to store the informations of the books


  
int main()
{
    int choice, ID_search; 
    conn = (struct connect*)malloc(sizeof(struct connect));
    conn->db = (database*)malloc(sizeof(database));
    
    char database_name[20];

    while(1)
    {    
        printf("Please type the number you want to do.\n");
        printf("1. creat a new database.\n2. search the database.\n3. delete the database.\n0. exit.\n");   
        scanf("%d",&choice);
        switch (choice)
        { 
        case 1:
            printf("Please type the name of the database you like.\n");
            scanf("%s", database_name);
            database_creat(database_name);//the data I typed in first can't be delete. BUG
            database_add(conn); 
            printf("Creating----------\n"); 
            break;  

        case 2:
            printf("please type the name of the database\n");
            scanf("%s", database_name);
            printf("Please type the ID you want to search.\n");
            scanf("%d",&ID_search);
            printf("enter search\n");     
            database_search(database_name,ID_search);
            printf("search over.\n");
            break;

        case 3:
            printf("deleting----------\n");
            break;

        default: 
            return 0;
            break;
        }
    } 
}
