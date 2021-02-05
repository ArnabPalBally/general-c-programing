#include<stdio.h>
int main()
{
	int arr[]={2,5,8,1,1,9};
	int n =sizeof (arr)/ sizeof (arr[0]);
	int i,j,mid;pos;first=0;
	int last=n-1;
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
	printf("position is %d",pos);
}
