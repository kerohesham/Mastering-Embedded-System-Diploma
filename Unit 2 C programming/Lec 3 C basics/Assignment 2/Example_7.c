#include "stdio.h"

void main()
{
	int a,b=1;
	printf("Enter an integer: ");
	fflush(stdout);
	scanf("%d",&a);
	if(a<0)
	printf("Error!!! Factorial of negative number doesn't exist.");
	else
	{
		for(int x=1;x<=a;x++)
		{
			b=b*x;
		}
		printf("Factorial = %d",b);
	}
}
