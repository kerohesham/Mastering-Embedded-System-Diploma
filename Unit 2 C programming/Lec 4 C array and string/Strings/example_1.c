#include "stdio.h"

int main()
{
	char a[100],b;
	int i=0,c=0;
	printf("Enter a string: ");
	fflush(stdout);
	gets(a);
	printf("Enter a character to find frequency: ");
	fflush(stdout);
	scanf("%c",&b);
	for(i=0;a[i]!='\0';i++){
		if(b==a[i]){
			c+=1;
		}
	}
	printf("Frequency of %c = %d",b,c);
}
