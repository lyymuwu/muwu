#include<stdio.h>

int t(int p);

int main()
{
    int  *p;
    int x= 21,m;
    *p = &x;

    printf("%p\n",p);

    p = &x;
    printf("%p",p);

    return 0;
}

