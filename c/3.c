#include<stdio.h>

int main()
{
    int num[5] = {1, 5, 6, 8, 9};
    int i, j, n, q;

    for(i=0;i<5;i++)
    {
        for(j=i;j<5;j++)
        {
            if(num[j] > num[i])
            {
                n = num[j];
                num[j] = num[i];
                num[i] = n;
            }
        }
    }
    
    for(q=0;q<5;q++)
    {
        if(q==4)
        {
            printf("%d\n", num[q]);
        }else
        {
            printf("%d", num[q]);
        }
    }
    
    
    return 0;
}