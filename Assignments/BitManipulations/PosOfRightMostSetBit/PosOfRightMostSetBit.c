#include <stdio.h>

#include <math.h>

int PosOfRightMostSetBit(int x)
	{
		return log10(x&-x)/log10(2)+1;
	}



int main()
{

	int x;
	printf("Enter x value \n");
	scanf("%d",&x);
	
	printf(" Position of right most set bit in %d is %d\n",x,PosOfRightMostSetBit(x));
	getchar();
	return 0;
	
}


