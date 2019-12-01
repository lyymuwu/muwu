#include<stdio.h>
#include <stdlib.h>  


int main()
{
    char m = 'A';
    while('A' <= m && m <= 'z')
    {
        if ((int)m%5 == 0)
        {
            printf("%4d-%3x-%2c   \n", m, m, m);
        }else
        {
            printf("%4d-%3x-%2c   ", m, m, m);
        }
        
        m++;
    }
    return 0;
}