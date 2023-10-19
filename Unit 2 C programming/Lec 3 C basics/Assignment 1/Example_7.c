#include "stdio.h"
void main()
{
	float a,b;
	printf("Insert the first number : ");
	fflush(stdout);
	scanf("%f",&a);
	printf("Insert the second number : ");
	fflush(stdout);
	scanf("%f",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("The first number : %f \nThe second number : %f",a,b);
}
