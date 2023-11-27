#include "stdio.h"
void Factorial(int x,int total,int y){
	if(x>0)
	{
		total=total*x;
		x--;
		Factorial(x,total,y);
	}
	else
		printf("Factorial of %d = %d",y,total);
}

int main()
{
	int x,y,total=1;
	printf("Enter an positive integer: ");
	fflush(stdout);
	scanf("%d",&x);
	y=x;
	Factorial(x,total,y);

}
