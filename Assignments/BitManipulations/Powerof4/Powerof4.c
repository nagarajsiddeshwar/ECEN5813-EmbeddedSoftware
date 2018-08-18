#include <stdio.h>
#include <stdbool.h>

bool Powerof4(int x)
	{
		if(x==0)
			return 0;
		while(x!=1)
		{
			if(x%4!=0)
				return 0;
			x=x/4;
		}
		return 1;
	}



int main()
{

	int x;
	printf("Enter x value \n");
	scanf("%d",&x);
	if(Powerof4(x))
		printf("%d is a power of 4\n",x);
	else
		printf("%d is not a power of 4\n",x);
	
	return 0;
	
}


