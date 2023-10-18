#include "stdio.h"

void main()
{
	float a,b,c;
	printf("Enter two numbers: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f %f",&a,&b);
	c=a*b;
	printf("Product: %f",c);
}

