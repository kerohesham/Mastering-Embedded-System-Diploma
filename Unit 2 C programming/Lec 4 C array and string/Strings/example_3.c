#include "stdio.h"

int main()
{
	char a[100],b[100];
	int i=0,d;
	printf("Enter the string : ");
	fflush(stdout);
	gets(a);
	while(a[i]!='\0'){
		i++;
	}
	d=i;
	printf("Reverse string is :");
	for(int k=0;k<=i;k++){
		b[k]=a[d];
		printf("%c",b[k]);
		d--;
	}

	return 0;
}
