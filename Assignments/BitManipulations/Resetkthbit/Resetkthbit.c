#include <stdio.h>
#include <math.h>
#include <unistd.h>
#include <stdint.h>



unsigned int Resetkthbit(unsigned int x,unsigned int k)
{
	return (x&~(1<<(k-1)));

}

int main(void)
{
	unsigned int x,k;
	printf("Enter the number \n");
	scanf("%d",&x);
	printf("Enter the bit position to be altered \n");
	scanf("%d",&k);
	printf("The entered number and the result after %d position are %d and %d \n",k,x,Resetkthbit(x,k));
	return 0;	
}
	

