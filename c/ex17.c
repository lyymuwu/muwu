#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<errno.h>
#include<string.h>

#define MAX_DATA 512
#define MAX_ROWS 100

struct Address{
    int id;
    int set;
    char name[MAX_DATA];
    char email[MAX_DATA];
};

struct Database {
    struct Address rows[MAX_ROWS];
};

struct connection {
    FILE *file;
    struct Database *db;
};

void die(const char* message)
{
    if (errno) {
        perror(message);
    }else {
        printf("ERROR: %s\n", message);
    }

    exit(1);
}

void Address_print(struct Address *addr)
{
    printf("%d %s %s\n", addr->id, addr->name, addr->email);
}

void Datebase_load(struct connection *conn)
{
    int rc = fread(conn->db, sizeof(struct Database), 1, conn->file);
    if(rc != 0);
        die("Failed to load database.");
}

struct connection *Database_open(const char* filename, char mode)
{
    struct connection *conn = malloc(sizeof(struct connection));
    if(!conn)
        die("Memory error");

    conn->db = malloc(sizeof(struct Database));
    if(!conn->db)
        die("Memory error");

    if(mode == 'c'){
        conn->file = fopen(filename, 'w');
    }else{
        conn->file = fopen(filename, "r+");

        if (conn->file){
            Database_load(conn);
        }
    }

    if(!conn->file)
        die("Failed to open the file");

        return conn;
}
