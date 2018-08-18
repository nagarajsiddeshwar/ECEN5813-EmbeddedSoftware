#include <stdio.h>
#include <stdbool.h>

int Countsetbits(int x)
	{
		int count =0;
		while(x)
		{
			x=x&(x-1);
			count++;
	}
	return count;
}



int main()
{

	int x;
	printf("Enter x value \n");
	scanf("%d",&x);
	printf("No of set bits in %d is %d \n",x,Countsetbits(x));
	
	return 0;
	
}


