#include "stdio.h"
void Reverse (){
	char c;
	scanf("%c",&c);
	if(c!='\n')
	{
		Reverse();
		printf("%c",c);
	}
}
int main()
{
	printf("Enter a sentence: ");
	fflush(stdout);
	Reverse();
}
