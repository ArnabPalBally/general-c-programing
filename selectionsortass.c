#include<stdio.h>
int main()
{
	
	int i,j,pos,max,t,n,arr[100];
	printf("enter the data");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("arr[%d]",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<=n-2;i++)
	{
		pos=i;
		max=arr[i];
		for(j=i+1;j<=n-1;j++)
		{
			if(max<arr[j])
			{
				pos=j;
				max=arr[j];
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
