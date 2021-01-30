#include<stdio.h>
int main()
{
	int a,b,c,max,min;
	printf("\n enter the 1st integer: ");
	scanf("%d",&a);
	printf("\n enter the 2nd integer: ");
	scanf("%d",&b);
	printf("\n enter the 3rd integer: ");
	scanf("%d",&c);
	max = a>b?(a>c?a:c):(b>c?b:c);
	min = a<b?(a<c?a:c):(b<c?b:c);
	printf("\n the maximum number is : %d",max);
	printf("\n the minimum number is : %d",min);
	return 0;
}
