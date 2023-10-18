#include "stdio.h"

void main()
{
	int x,y,a;
	printf("Enter two integers: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&x);
	scanf("%d", &y);
	a=x+y;
	printf("Sum: %d",a);
}

