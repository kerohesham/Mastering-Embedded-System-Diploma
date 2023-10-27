#include "stdio.h"

int main()
{
	int a;
	float b[100],average=0;
	printf("Enter the numbers of data: ");
	fflush(stdout);
	scanf("%d",&a);
	for(int i=0;i<a;i++){
		printf("%d. Enter number: ",i+1);
		fflush(stdout);
		scanf("%f",&b[i]);
		average+=b[i];
	}
	average/=a;
	printf("Average = %.2f",average);
	return 0;
}
