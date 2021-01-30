#include<stdio.h>
int main()
{
	char choice;
	int a,b;
	printf("Enter 1st number :");
	scanf("%d",&a);
	printf("Enter 2nd number :");
	scanf("%d",&b);
	printf("\n press + for additon");
	printf("\n press - for subtraction ");
	printf("\n press * for multiplication ");
	printf("\n press / for divison");
	scanf(" %c",&choice);
	switch(choice)
	{
		case '+':
			printf("addition is %d + %d =%d ",a,b,a+b);
			break;
		case '-':
			printf("subtraction is %d - %d = %d ",a,b,a-b);
			break;
		case '*':
			printf(" multiplication is %d * %d = %d",a,b,a*b);
			break;
		case '/':
			if(b==0)
				printf("divison by 0 is not allowed");
			else
			    printf("divison is %d / %d : %f",a,b,((1.0*a)/b));
			break;
		default :
			printf("invalid inputs");
	}
	return 0;
}
