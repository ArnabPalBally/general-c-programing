#include<stdio.h>
int main()
{
	int n,i,arr[100], j,mid,pos,k,first=0, last;
	printf("enter the size of array");
	scanf("%d",&n);
	printf("enter the data at assending order");
	for(i=0;i<n;i++)
	{
		printf("arr[%d]:",i);
		scanf("%d",&arr[i]);
	}
	last=n-1;
	printf("enter number :");
	scanf("%d",&k);
	while(first<=last)
	{
		mid=(first+last)/2;
		if(arr[mid]==k)
		{
			pos=mid;
			break;
		}
		else
		{
			if(arr[mid]>k)
			{
				last = mid-1;
			}
			else
			{
				first=mid+1;
			}
		}
	}
	if(first<=last)
	{
		printf("the position is %d",pos);
	}
	else
	{
		printf("unsuccessful");
	}
	return 0;
}
