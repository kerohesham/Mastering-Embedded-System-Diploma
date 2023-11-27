#include "stdio.h"
int Power(int x,int y){
	if(y!=0){
	return(x*Power(x,y-1));
	}
	return 1;
}


int main()
{
	int x,y;
	printf("Enter base number: ");
	fflush(stdout);
	scanf("%d",&x);
	printf("Enter power number(positive integer): ");
	fflush(stdout);
	scanf("%d",&y);
	printf("%d^%d = %d",x,y,Power(x,y));
	fflush(stdout);


}
