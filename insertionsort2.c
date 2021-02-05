#include<stdio.h>
int main()
{
	int i,j,k,n,arr[100];
	printf("enter the number");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("arr[%d]",i);
		scanf("%d",&arr[i]);
	}
	for(i=1;i<=n-1;i++)
	{
		k=arr[i];
		j=i-1;
		while(j>=0 && k>arr[j])
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=k;
	}
	for(i=0;i<n;i++)
	{
		printf(" %d",arr[i]);
	}

	return 0;
}
