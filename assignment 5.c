#include<stdio.h>
int main()
{
	int y;
	printf("please enter a year :");
	scanf("%d",&y);
	if(y>=0&&y<=9999)
	{
		if((y%400==0)||((y%100!=0)&& (y%4==0)))
		{
			printf("it is a leap year:%d",y);
		}
		else
		{
			printf("it is not a leapyear:%d",y);
		}
	}
	else
	{
		printf("invalid inputs");
	}
	return 0;
}
