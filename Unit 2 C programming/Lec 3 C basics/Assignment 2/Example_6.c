#include "stdio.h"

void main()
{
	int a,sum=0;
	printf("Enter an integer: ");
	fflush(stdout);
	scanf("%d",&a);
	for(int x=0;x<=a;x++)
	{
		sum=sum+x;
	}
	printf("Sum = %d",sum);
}
