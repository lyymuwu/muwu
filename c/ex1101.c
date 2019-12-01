#include<stdio.h>

void main()
{
    char a[3][20] = {
        "jinan","Las vegas","Weihai"
    };
    char *ptr;
    ptr= a[1];
    printf("%s\n",ptr);
}