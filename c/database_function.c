#ifndef _STRUCTURE_BOOK_
#define _STRUCTURE_BOOK_

#define NAME_MAX 20



struct each_book{
    int ID;
    char book_name[NAME_MAX];
    char author_name[NAME_MAX];
    char press[NAME_MAX];
}book;

struct connect{
    FILE* file;
    book* database;
};

#endif

#include<stdio.h>


void database_creat(char* database_name) 
{
    int i = 0;
    conn->file = fopen(database_name,"w");
    for(i=0;i<BOOK_MAX;i++)
    {
        book* onebook = (book*)malloc(sizeof(book));
        onebook->ID = i;
        conn->db->allbook[i] = onebook;
    }

    fwrite(conn->db,sizeof(book),BOOK_MAX,conn->file);
    printf("creat over.\n");
}

void database_add(struct connect* conn)
{
    int i = 0;
    while(1&&(i<BOOK_MAX))
    {
        int choice;

        printf("Do you want to add something to the database?\n");
        printf("please type the number\n1. yes\n2. no\n");
        scanf("%d",&choice);
        if(choice==1)
        {
            printf("Please type the author name.\n");
            scanf("%s", conn->db->allbook[i]->author_name);
            printf("Please type the book name.\n");
            scanf("%s", conn->db->allbook[i]->book_name);
            printf("Please type the press name.\n");
            scanf("%s", conn->db->allbook[i]->press);
            i++;
        }else{
            break;
        }
    }

    rewind(conn->file);
    fwrite(conn->db,sizeof(book),BOOK_MAX,conn->file);
}

void database_search(char* database_name, int ID_search)
{
    struct connect* comm  = (struct connect*)malloc(sizeof(struct connect));
    int i=0;
    
    comm->file = fopen(database_name,"r+");
    printf("fopen \n");
    rewind(comm->file);
    comm->db = (database*)malloc(sizeof(database));
    fread(comm->db,sizeof(book), BOOK_MAX, comm->file);
    printf("load over\n");
    
    
    printf("begin to load.\n");
    
    for(i=0;(i!=ID_search)&& i<= BOOK_MAX;i++)
    {
        //printf("-");   
    }
    printf("find it\n");



    book* abook = comm->db->allbook[i];
    printf("The author name is %s\n", abook->author_name);
    printf("The book name is %s\n", abook->book_name);
    printf("The press is %s\n", abook->press);

    if(ID_search <= BOOK_MAX)
    {
        printf("The author name is %s\n", comm->db->allbook[i]->author_name);
        printf("The book name is %s\n", comm->db->allbook[i]->book_name);
        printf("The press is %s\n", comm->db->allbook[i]->press);
    }else
    {
        printf("Please type the number not larger than %d", BOOK_MAX);
    }
    free(comm);
}



// struct connect* database_load(char* database_name)
// {
    

//     return comm;
// }

