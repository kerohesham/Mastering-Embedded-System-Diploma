#include "stdio.h"

int main()
{
	int a,b[100],c,d,i;
	printf("Enter no of elements : ");
	fflush(stdout);
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		scanf("%d",&b[i]);
	}
	printf("Enter the element to be inserted: ");
	fflush(stdout);
	scanf("%d",&c);
	printf("Enter the location : ");
	fflush(stdout);
	scanf("%d",&d);
	for(int l=a+1;l>=d;l--){
	b[l]=b[l-1];
	}
	b[d-1]=c;
	for(i=0;i<=a;i++ )
	{
		printf("%d",b[i]);
	}
	return 0;
}
