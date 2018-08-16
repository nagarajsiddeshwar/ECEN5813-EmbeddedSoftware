#include <stdio.h>
#include<stdlib.h>
#include <stdbool.h>
#include <stdint.h>
#include <math.h>

bool oppositeornot(int x, int y)
	{
		return((x^y)>0);
	}



int main()
{

	int x=100,y=-200;
	if(!oppositeornot(x,y)) 
		printf("x and y have opposite signs \n",x,y);
	else
		printf("x and y don't have opposite signs \n",x,y);
}


