#include <stdio.h>
#include <math.h>
#include <unistd.h>
#include <stdint.h>



unsigned int SwapNibble(unsigned int x)
{
	return ((x&0x0F)<<4|(x&0xF0)>>4);

}

int main(void)
{
	unsigned int x;
	printf("Enter the number \n");
	scanf("%d",&x);
	printf("The entered number adnd the SwapNibble result are %d and %d \n",x,SwapNibble(x));
	return 0;	
}
	

