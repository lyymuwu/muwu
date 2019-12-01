#include<stdio.h>
#include<stdlib.h>

typedef struct vectors{
	int n1;
	int n2;
	int n3;
}vector;

typedef struct database{
	vector vec[20];
}base;


base Add(base B, int i);
base Modify(base B);
base Mul(base B);
base display(base B);



int main()
{
	base B;
	int i = 0, choice = 0;

	while(1)
	{
		printf("1.creat\n2.modify\n3.multiply\n4.display\n0.exit\n");
		scanf("%d", &choice);
		switch(choice)
		{
		case 1:
			B = Add(B,i);
			printf("Adding-----------\n");
			break;
		case 2:
			B = Modify(B);
			printf("\nmodifying-----------\n");
			break;
		case 3:
			B = Mul(B);
			printf("multiplying-----------\n");
			break;
		case 4:
			B = display(B);
			printf("displaying-----------\n");
			break;
		default:
			return 0;
			break;
		}
	}

	return 0;
}


base Add(base B, int i)
{
	int no=1, nt=1, ntt=1;
	vector vr;
	
	printf("the ID of this vector is %d\n", i+1);
	printf("Please type the three number in these vector.\n");
	scanf("%d %d %d", &no, &nt, &ntt);

	vr.n1 = no;
	vr.n2 = nt;
	vr.n3 = ntt;
	B.vec[i] = vr;
	i++;

	return B;
}


base Modify(base B)
{
	int ID = 0;
	int no=0, nt=0, ntt=0;
	vector vr;
	
	printf("Please type the ID of the vector.");
	scanf("%d", &ID);
	printf("\nPlease type the three number in these vector.\n");
	scanf("%d %d %d", &no, &nt, &ntt);
	vr.n1 = no;
	vr.n2 = nt;
	vr.n3 = ntt;

	B.vec[ID-1] = vr;

	return B;
}

base Mul(base B)
{
	int ID = 0, k = 0;
	vector vr;

	printf("Please type the ID of the vector.");
	scanf("%d", &ID);
	printf("\nPlease type the number you want to multiply.");
	scanf("%d", &k);
	vr.n1 = B.vec[ID-1].n1 * k;
	vr.n2 = B.vec[ID-1].n2 * k;
	vr.n3 = B.vec[ID-1].n3 * k;
	
	B.vec[ID-1] = vr;
	return B;
}

base display(base B)
{
	int ID = 0;
	printf("Please type the ID of the vector.");
	scanf("%d", &ID);
	
	printf("\n%d\n", B.vec[ID-1].n1);
	printf("%d\n", B.vec[ID-1].n2);
	printf("%d\n", B.vec[ID-1].n3);

	return B;
}