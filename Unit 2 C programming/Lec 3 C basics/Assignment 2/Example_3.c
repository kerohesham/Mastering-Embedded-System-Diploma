#include "stdio.h"

void main()
{
	float a,b,c;
	printf("Enter three numbers: ");
	fflush(stdout);
	scanf("%f %f %f",&a,&b,&c);
	if (a>b)
	{
		if(a>c)
			printf("Largest number = %f",a);
		else
			printf("Largest number = %f",c);
	}
	else{
		if(b>c)
			printf("Largest number = %f",b);
		else
		printf("Largest number = %f",c);
	}
}
