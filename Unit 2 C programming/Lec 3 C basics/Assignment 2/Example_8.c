#include "stdio.h"

void main()
{
	char a;
	float b,c,d;
	printf("Enter opreator either + or - or * or / : ");
	fflush(stdout);
	scanf("%c",&a);
	printf("Enter two operands: ");
	fflush(stdout);
	scanf("%f %f",&b,&c);
	switch (a)
	{
	case ('+'):
			{
		d=b+c;
		break;
			}
	case ('-'):
			{d=b-c;
			break;
			}
	case ('*'):
			{
		d=b*c;
		break;
			}
	case ('/'):
			{
		d=b/c;
		break;
			}
	}
	printf("%f %c %f = %f",b,a,c,d);
}
