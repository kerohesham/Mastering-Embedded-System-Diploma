#include "stdio.h"

void main()
{
	char a;
	printf("Enter a character: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%c",&a);
	printf("ASCII value of %c = %d",a,a);
}
