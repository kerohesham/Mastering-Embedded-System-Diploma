#include "stdio.h"
void Prime_Numbers(int x, int y)
{
	for(int i=x;i<y;i++)
	{
		if(i%2==1)
		{
			if(i%3!=0)
			{
				if(i%5!=0)
				{
				printf(" %d",i);
				}
			}

		}
	}
}

int main()
{
	int x,y;
	printf("Enter two numbers(intervals) :");
	fflush(stdout);
	scanf("%d %d",&x,&y);
	printf("Prime numbers between %d and %d are:",x,y);
	Prime_Numbers(x,y);
}
