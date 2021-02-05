#include<stdio.h>
int main()
{
	
	int i,j,k,pos=0,n,arr[100];
	printf("the size of array");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("arr[%d]",i);
		scanf("%d",&arr[i]);
	}
	printf("enter a number :");
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		if(arr[i]=k)
		{
			pos=i;
			break;
		}
	}
	printf(" %d",pos);
	return 0;
}
