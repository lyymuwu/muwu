#include<stdio.h>

int main()
{
    int i;
    int n[] = {12,321,654,21,54,98,35};
    int *p = n;
    int size = (sizeof(n)/sizeof(int));

    for(i=size-1;i>=0;i--)
    {
        printf("%d ",*(p+i));
    }
    return 0;
}