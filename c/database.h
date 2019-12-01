#ifndef _STRUCTURE_BOOK_
#define _STRUCTURE_BOOK_

#define NAME_MAX 20
#define BOOK_MAX 100



typedef struct each_book{
    int ID;
    char book_name[NAME_MAX];
    char author_name[NAME_MAX];
    char press[NAME_MAX];
}book;


typedef struct database{
    book* allbook[BOOK_MAX];///////////no stars  !!!!!!!!!!!!!!!!!!!!!!!!!!
}database;

struct connect{
    FILE* file;
    database* db;
};

#endif
struct connect* conn;
void database_creat(char* database_name);
void database_add(struct connect* conn);
void database_search(char* database_name, int ID_search);
// struct connect* database_load(char* database_name);

#include"database_function.c"