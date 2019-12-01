#include<stdio.h>

int main()
{
    int array[4][3];
    int table[2][3] = {0, 0, 0, 1, 1, 1};
    int table_s [][3] = {

                    {2, 3, 4},
                    {1, 5, 9}
    };

    printf("%d  %d\n",table[0][0], table[1][1]);
    printf("%d  %d\n", table_s[0][1], table_s[1][2]);
    return 0;
}