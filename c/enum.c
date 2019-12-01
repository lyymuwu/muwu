#include<stdio.h>

enum whatever{a,b,c,d};

void f(enum whatever c);

int main(void)
{
    enum whatever t = a;
    scanf("%d", &t);
    f(t);


    return 0;
}

void f(enum whatever c)
{
    printf("%d\n", c);
}