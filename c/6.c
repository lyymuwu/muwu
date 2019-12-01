#include<stdio.h>

int main()
{
    int number[] = {1, 2, 3, 4};
    char name[] = {'j','k','o','m'};
    char *nnoo[] = {"like","po","vo"};
    int s;
    
    printf("%c\n", name[0]);
    printf("%c\n", nnoo[0][1]);
    printf("%s\n", nnoo[0]);
    s = sizeof(name[0]);
    printf("%d\n", s);
    printf("%ld\n", sizeof(char));
    printf("%ld\n", sizeof(int));
    printf("%ld\n", sizeof(number[0]));
    printf("%ld\n", sizeof(number));
    printf("%ld\n", sizeof(nnoo));
    printf("%ld\n", sizeof(name));

    name[0] = name[1];
    printf("%c\n", name[0]);

    nnoo[0][0] = nnoo[1][0];
    printf("%c\n", nnoo[0][0]);

    return 0;
}