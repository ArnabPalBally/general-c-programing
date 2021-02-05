#include<stdio.h>
int main()
{
	
	int i,j,pos,min,t,n,arr[100];
	printf("enter the data");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("arr[%d]",i);
		scanf("%d",arr[i]);
	}
	for(i=0;i<=n-2;i++)
	{
		pos=i;
		min=arr[i];
		for(j=i+1;j<=n-1;j++)
		{
			if(min>arr[j])
			{
				pos=j;
				min=arr[j];
			}
		}
		t=arr[i];
		arr[i]=arr[pos];
		arr[pos]=t;
	}
	for(i=0;i<n;i++)
	{
		printf(" %d",arr[i]);
	}
	return 0;
}
