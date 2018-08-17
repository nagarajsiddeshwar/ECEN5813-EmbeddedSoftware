#include <stdio.h>
#include <math.h>


int bin(unsigned n)
{
	static int result=0;
	if (n > 1)
		bin(n/2);
	result=result*10+(n%2);
	return result;

}

int main(void)
{
	int x;
	printf("Enter the number \n");
	scanf("%d",&x);
	printf("%d",bin(x));
	
	
}
	

