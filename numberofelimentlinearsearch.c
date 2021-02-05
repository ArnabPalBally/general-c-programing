#include<stdio.h>
int main()
{
	
	int i,j,k,count=0,n,arr[100];
	printf("enter the size of data");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("arr[%d]:",i);
		scanf("%d",&arr[i]);
	}
	printf("enter a number :");
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		if(arr[i]==k)
		{
			count++;
		}
	}
	printf(" %d",count);
	return 0;
}
