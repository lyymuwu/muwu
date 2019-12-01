#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int* root(int* p);

int main()
{
    int n[3];
    int *p;// = malloc(sizeof(n));

    printf("please type a, b and c.\n");
    scanf("%d %d %d", &n[0],&n[1],&n[2]);

    p = root(n);

    // free(p);
    return 0;
}

int* root(int* p)
{
    int n = p[1] * p[1] - 4 * p[0] * p[2];
    int m = sqrt(n);
    int* q = &m;

    return q;
}