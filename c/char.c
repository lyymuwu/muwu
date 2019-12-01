#include<stdio.h>
#include<stdlib.h>

int main()
{
    char* a = (char*)malloc(sizeof(char));
    scanf("%s", a);
    printf("%s",a);
    scanf("%s", a);
    printf("%s",a);

    return 0;
}