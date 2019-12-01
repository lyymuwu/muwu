#include<stdio.h>

int main()
{
    int i, n, R;
    int num[10];
    float RRRR;

    printf("please type cost like RRRR.PP and all the number must less than 10\n");
    scanf("%f", &RRRR);
    printf("%f\n",RRRR);

    R = (int)RRRR;
    printf("%d\n", R);

    for (i=1; i!= 0; n++)
    {
        i = R/10;
    }
    printf("%d",n);
    
    return 0;
}
