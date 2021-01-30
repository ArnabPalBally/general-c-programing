#include<stdio.h>
#include<math.h>
int main()
{
	int x,sum=0;
	for(x=1;x<=5;x++)
	{
		sum+=pow(x,x);
	}
	printf(" sum is %d",sum);
	return 0;
}
