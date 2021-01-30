#include<stdio.h>
int main()
{
	int i,j,n,a=0;
	printf("no of life:");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++)
		{
			printf("%c",97+a++%26);
		}
		printf("\n");
	}
	return 0;
}
