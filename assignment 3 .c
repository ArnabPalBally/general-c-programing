#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the value of a :");
	scanf("%d",&a);
	printf("enter the value of b:");
	scanf("%d",&b);
	printf(" \nthe value of a and b :%d , %d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nafter swapping the value of a,b:%d , %d", a,b);
	return 0;
}
