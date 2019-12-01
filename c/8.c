#include <stdio.h>
int main()
{
    int m [10][10];
    int i, j;
    m [0][0] = 1;

    for(j=1;j<=9;j++)
    {
        m[0][j] = 0;
    }
    
    for(j=0;j<=9;j++)
    {
        if(m[0][j] == 0)
        {
            printf("    ");
        }else{
            printf("%-4d", m[0][j]);
            }
    }
    printf("\n");
    
    for(i=1;i<=9;i++)
    {
        for(j=0;j<=9;j++)
        {
            m[i][j] = m[i-1][j-1] + m[i-1][j];
            if(m[i][j] == 0)
            {
                printf("    ");
            }else{
                printf("%-4d",m[i][j]);
                }
        }
        printf("\n");
    }
    return 0;
}