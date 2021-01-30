#include<stdio.h>
#include<math.h>
int main()
{
	int n,n1,n2,r,count=0,sum=0;
	printf("enter a number:");
	scanf("%d",&n);
	n1=n;
	n2=n;
	while(n>0)
	{
		n=n/10;
		count ++;
		
	}
	while(n1>0)
	{
		r=n1%10;
		sum=sum+pow(r,count);
		n1=n1/10;
	}
	if(sum==n2)
	{
		printf("\n %d is a armstrong number",n2);
	}
	else
		printf("\n %d is not a armstrong number",n2);
	return 0;
}
