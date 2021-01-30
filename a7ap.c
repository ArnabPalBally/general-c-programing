#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d;
	float root1,root2; 
	printf("enter the value of a(integer)");
	scanf("%d",&a);
	printf("enter the value of b(integer)");
	scanf("%d",&b);
	printf("enter the value of c(integer)");
	scanf("%d",&c);
	if(a==0)
	{
		printf("this equation is not a quardratic equation");
	}
	else
	{
	    d=((b*b)-(4*a*c));
	   if(d==0)
	   {
		   printf("the roots are equal and both real value");
		   root1=root2=(-b/(2.0*a));
		   printf("\n root is %0.2f",root1);
	   }
	   else
	   {
	   	 if(d<0)
	     {
	  	    printf("both roots are complex number");
	     }
	     else
	     {
	    	root1=(-b+sqrt(d))/(2.0*a);
	    	root2=(-b-sqrt(d))/(2.0*a);
	    	printf("1st root :%0.2f",root1);
	    	printf("\n2nd root :%0.2f",root2);
		 }
	   } 
    }
    return 0;
}
