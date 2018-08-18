#include <stdio.h>

int Addone(int x)
	{
		return(-(~(x)));
	}



int main()
{

	int x;
	printf("Enter x value \n");
	scanf("%d",&x);
	printf("x +1 is \n",Addone(x));
	
	return 0;
	
}


