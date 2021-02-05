#include<stdio.h>
int main()
{
	int i,j,t,n;
	printf("enter the total number:");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		printf("arr[%d]:",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<=n-2;i++)
	{
		for(j=i+1;j<=n-1;j++)
		{
			if(arr[i]>arr[j])
			{
				t=arr[j];
				arr[j]=arr[i];
				arr[i]=t;
			}}
	}
	for(i=0;i<n;i++)
	{
		printf(" %d",arr[i]);
	}
	return 0;
	
}
