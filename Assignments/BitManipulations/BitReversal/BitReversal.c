#include <stdio.h>
#include <math.h>
#include <unistd.h>
#include <stdint.h>



unsigned int BitReversal(unsigned int x)
{
	unsigned int NOOFBITS=sizeof(x)*8;
	unsigned int reversenum=0;
	for(int i=0;i<NOOFBITS;i++)
	{
		if(x&(1<<i))
		{
			reversenum|=1<<((NOOFBITS-1)-i);
		}
	}
	return reversenum;

}

int main(void)
{
	unsigned int x;
	printf("Enter the number \n");
	scanf("%d",&x);
	printf("Bit reversed number of %u is %u \n",x,BitReversal(x));
	return 0;	
}
	

