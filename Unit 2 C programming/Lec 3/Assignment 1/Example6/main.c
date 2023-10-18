
#include "stdio.h"
void main()
{
	float a,b,c;
	printf("Enter value of a: ");
	fflush(stdout);
	scanf("%f",&a);
	printf("Enter value of b: ");
	fflush(stdout);
	scanf("%f",&b);
	c=a;
	a=b;
	b=c;
	printf("After swapping, value of a = %f \r\n"
			"After swapping, value of b = %f",a,b);
}
