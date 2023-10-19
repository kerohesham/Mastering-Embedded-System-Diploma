#include "stdio.h"

void main()
{
	char a;
	printf("Enter a character: ");
	fflush(stdout);
	scanf("%c",&a);
	if(a>64&a<123)
		printf("%c is an alphabet",a);
	else
		printf("%c is not an alphabet",a);
}
