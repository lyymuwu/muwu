#include<stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int year, n;
    char number[] = "5987";
    year = atoi(number);
    printf("%d", year);

    n = strcmp("thaaa", "these");
    printf("%d", n);
    
    return 0;
}