//pattern special
//a b c d e
//  f g h
//    i
//this type of pattern printing
#include<stdio.h>
int main()
{
	int i,j,n,a=97;
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
			printf("%c",a++);
			if(a>122)
			{
				a=97;
			}
		}
		printf("\n");
	}
	return 0;
}
