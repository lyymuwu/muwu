#include<stdio.h>

int main()
{
    int x, sum;
    scanf("%d", &x);

    for(; x > 0 ; x--)
    {
        sum += (1/x);
    }

    printf("%d\n", sum);

    return 0;

}