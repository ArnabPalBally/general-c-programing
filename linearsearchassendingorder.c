#include<stdio.h>
int main()
{
	int i,j,t,n;
	printf("enter the size of array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("arr[%d]:",i);
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<=n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				t=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=t;
			}
		}
	}
	for(i=1;i<n;i++)
	{
		printf(" %d",arr[i]);
	}
	return 0;
}
