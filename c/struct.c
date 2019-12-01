#include<stdio.h>
#include <stdlib.h>
#include<assert.h>


struct subject
{
    char* name;
    int Gpoint;
    float hard;
};

struct subject *creat(char* name, int Gpoint, float hard)
{
    struct subject *which = malloc(sizeof(struct subject));
    assert(which != NULL);

    which->name = name;
    which->Gpoint = Gpoint;
    which->hard = hard;
    
    return which;
}

void s_print(struct subject *which)
{
    printf("name = %-15s\n", which->name);
    printf("Gpoint = %1d\n", which->Gpoint);
    printf("hard = %4.1f\n", which->hard);
}

void destory(struct subject *which)
{
    free(which);
}

int main()
{
    struct subject *L_A =  creat("Linear Algebra", 2, 8.5);
    struct subject *Ca =  creat("Calculus", 3, 9.5);
    struct subject *C =  creat("C language", 2, 5.5);

    s_print(L_A);
    s_print(Ca);
    s_print(C);

    destory(L_A);
    destory(Ca);
    destory(C);

    return 0;
}
