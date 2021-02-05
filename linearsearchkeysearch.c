#include<stdio.h>
int main()
{
	int n,arr[100],i,j,k,pos=0;
	printf("enter the data");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("arr[%d]",i);
		scanf("%d",arr[i]);
	}
	
	printf("enter a number :");
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		if(arr[i]==k)
		{
			pos=i;
			break;
		}
	}
	printf(" %d",pos);
	return 0;
}
