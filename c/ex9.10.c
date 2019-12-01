#include<stdio.h>
#include<math.h>

void Perimeter(int a, int b, int c);
void Area(int a, int b, int c);

int main()
{
    int a,b,c;
    int choice;
    printf("Please type the three sides of a triangle\n");
    scanf("%d %d %d",&a, &b, &c);

    printf("Please type the number you want to get\n");
    printf("1.Perimeter, 2.Area\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        Perimeter(a,b,c);
        break;
    
    case 2:
        Area(a,b,c);
        break;

    default:
        break;
    }
    return 0;
}

void Perimeter(int a, int b, int c)
{
    int result = a+b+c;
    printf("The perimeter is %d",result);
}

void Area(int a, int b, int c)
{
    int s = 0.5*(a+b+c);
    int result_one = s*(s-a)*(s-b)*(s-c);
    int result_two = sqrt(result_one);
    printf("The Area is %d", result_two);
}