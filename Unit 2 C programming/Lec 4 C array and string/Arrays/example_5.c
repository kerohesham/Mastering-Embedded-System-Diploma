#include "Stdio.h"

int main()
{
	int a[100],b,c,i=0;
	printf("Enter no of elements : ");
	fflush(stdout);
	scanf("%d",&b);
	for(i=0;i<b;i++)
		{
			scanf("%d",&a[i]);
		}
	printf("Enter the elements to be searched : ");
	fflush(stdout);
	scanf("%d",&c);
	for(i=0;i<b;i++)
	{
		if (a[i]==c){
		printf("Number found at the location = %d",i+1);
		}
	}
}
