#include "stdio.h"

int main()
{
	int e,f,i;
	int a[100][100],b[100][100];
	printf("Enter rows and column of matrix: ");
	fflush(stdout);
	scanf("%d %d",&e,&f);
	printf("Enter elements of matrix: \n");
	for (i=0;i<e;i++)
	{
		for(int k=0;k<f;k++){
			printf("Enter elements a%d%d: ",i+1,k+1);
			fflush(stdout);
			scanf("%d",&a[i][k]);
		}
	}
	printf("Entered Matrix: \n");
	for (i=0;i<e;i++)
	{
		for(int d=0;d<f;d++){
			printf("%d\t",a[i][d]);
			b[d][i]=a[i][d];
		}
		printf("\n");
	}
	printf("Transpose of Matrix: \n");
	for (i=0;i<f;i++)
	{
		for(int d=0;d<e;d++){
			printf("%d\t",b[i][d]);
		}
		printf("\n");
	}
	return 0;
}
