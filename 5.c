#include<stdio.h>
int main()
{
	int a;
	float b;
	char c;
	double d;
	
	printf("\n enter the value of a(integer):\n");
	scanf("%d",&a);
	printf("\n enter the value of b(float):\n");
	scanf("%f",&b);
	printf("\n enter the value of c(charecter):\n");
	scanf(" %c",&c);
	printf("\n enter the value of d(double):\n");
	scanf("%lf",&d);
	printf("\n value a=%d , b=%f , c=%c , d=%lf",a,b,c,d);
	printf("\n address of: a=%u, b=%u , c=%u , d=%p ", &a,&b,&c,&d);
	printf("\n size of a=%d , b=%u , c=%d , d=%u ", sizeof(a),sizeof b,sizeof(c),sizeof d);
	return 0;
}
