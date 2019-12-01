#include<stdio.h>
#include<stdlib.h>

typedef struct time_struct
{
	int hour;
	int minute;
	int second;
}time;

int main()
{
	int thour, tmin, tsec;
	time* ti = (time*)malloc(sizeof(time));
	printf("Please type the time you want to display\n");
	printf("hours?\n");
	scanf("%d", &thour);
	printf("minutes?\n");
	scanf("%d", &tmin);
	printf("seconds?\n");
	scanf("%d", &tsec);
	ti->hour = thour;
	ti->minute  = tmin;
	ti->second = tsec;

	printf("So, the time you type in is %2d:%2d:%2d", ti->hour, ti->minute, ti->second);

	free(ti);
	return 0;
}