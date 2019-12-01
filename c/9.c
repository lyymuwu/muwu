#include<stdio.h>

int main()
{
    char str[] = "123456789";
    int num[5][9];
    int i, j, n, m;
    
    for(i=0;i<=4;i++)
    {
        for(j=0;j<=8;j++)
        {
            num[i][j] = 0;
        }
    }

    for(i=1;i<=4;i++)
    {
        num[i][4] = num[i-1][4] + 2;
    }

    for(i=0;i<=4;i++)
    {
        for(n=1;n<=i;n++)
        {
            num[i][4-n] = num[i][4] - n;
            num[i][4+n] = num[i][4] - n;     
        }
        for(j=0;j<=8;j++)
        {
            m = num[i][j];
            if(m==0 && j != 4)
            printf(" ");
            else{
                printf("%c",str[m]); 
                }   
        }
        printf("\n");
    }
}






/*    000010000
      000232000
      003454300
      045676540
      567898765

      000000000
      000121000
      002343200
      034565430
      456787654



*/ 