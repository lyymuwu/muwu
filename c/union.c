#include<stdio.h>

union item
{
	int a;
	float b;
	unsigned char c[4];
}; 

int main()
{
	union item first;
	first.a = 1000000;//0100,0000       0100,0010      0000,1111      0000,0000
	printf("int: %d\n",first.a);
	printf("float: %f\n",first.b);                     //编码方式不同，导致无输出。
	printf("char0: %c\n",first.c[0]);
	printf("char1: %c\n",first.c[1]);
	printf("char2: %c\n",first.c[2]);
	printf("char3: %c\n",first.c[3]);

	return 0;
}
