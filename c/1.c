#include<stdio.h>

int main(int argc, char *argv[])
{
    int number = 10086;
    int *nptr = &number;
    // int all = {100, 200, 300, 400};

    
    
    printf("%p\n", nptr);

    char **num = argv;

    printf("%p\n",num);
    printf("%p\n",num + 1);
    printf("%p\n",num + 2);

    return 0;

    

}