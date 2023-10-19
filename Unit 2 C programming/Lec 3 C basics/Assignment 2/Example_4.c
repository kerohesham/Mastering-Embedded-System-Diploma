#include "stdio.h"

void main()
{
	float a;
	printf("Enter a number: ");
	fflush(stdout);
	scanf("%f",&a);
	if(a>0)
	printf("%f is positive",a);
	else if(a==0)
	printf("you entered zero");
	else
	printf("%f is negative",a);
}
