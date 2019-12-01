#include<stdio.h>

int main()
{
    printf("This function is used to show the sizeof each type.\n");

    printf("int: %ld\n", sizeof(int));
    printf("float: %ld\n", sizeof(float));
    printf("double: %ld\n", sizeof(double));
    printf("char: %ld\n", sizeof(char));
    printf("long: %ld\n", sizeof(long));
    printf("unsigned char: %ld\n", sizeof(unsigned char));
    return 0;
}