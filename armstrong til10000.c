#include<stdio.h>
#include<math.h>
int main()
{
	int r,x,x1,x3,count=0,sum=0;
	for(x=100;x<=10000;x++)
	{
		x=x3;
		x=x1;
		while(x3>0)
		{
			x3=x3/10;
			count ++;
			
		}
		while(x1>0)
		{
			r=x1%10;
			sum=sum+pow(r,count);
			x1=x1/10;
		}
		if(sum==x)
			printf("\n %d is a armstrong number",x);
	}
	return 0;
}
