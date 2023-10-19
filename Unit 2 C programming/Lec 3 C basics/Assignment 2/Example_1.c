#include "stdio.h"
void main()
{
	int a;
	printf("Enter an integer you want to check: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%d",&a);
	if(a%2==1|a%2==-1)
	{
		printf("%d is odd.",a);
	}
	else if(a%2==0)
	{
		printf("%d is even.",a);
	}

}
