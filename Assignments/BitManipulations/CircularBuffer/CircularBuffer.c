#include "main.h"
#include<stdlib.h>

#include <stdint.h>
#include <math.h>

#include "cbuffer.h"

//circular_buff_t

/*--------- This function shall initialize a circular buffer ----------*/ 

uint8_t init_buff(circular_buff_t* cptr, uint8_t size)

	{
		cptr->start=malloc(sizeof(uint8_t)* size);
		cptr->head=cptr->start;
		cptr->tail=cptr->start;
		cptr->size=size;		
		cptr->end=cptr->start+size;
		cptr->numitems=0;
		return 1;
	}


/*--------- This function shall destroy a circular buffer ----------*/

uint8_t Destroy_buffer( circular_buff_t* cptr)
	
	{	
	
		free(cptr->start);
		return 1;

	}


/*--------- This function shall indicate when a circular buffer is full ----------*/

uint8_t buff_full(circular_buff_t* cptr)

	{

		if((cptr->head==cptr->tail)&&(cptr->numitems!=0))
		{
			printf("Buffer full");
			return 1;
		}
		else
			return 0;

	}

/*--------- This function shall add an element to a circular buffer----------*/

uint8_t add_buff(circular_buff_t* cptr,uint8_t data)

	{

		if(cptr->head>cptr->end)

		{

		cptr->head=cptr->start;
			
		}

		if(buff_full(cptr)

		return 0;

		*cptr->head=data;
		cptr->numitems++;
		cptr->head++;
		return 1;

	}

/*--------- This function shall delete an element to a circular buffer----------*/

uint8_t del_buff(circular_buff_t* cptr)

	{

		uint8_t data;

		if(cptr->tail>cptr->end)

		{

		cptr->tail=cptr->start;
			
		}

		if(buff_full(cptr)

		return 0;

		data=*cptr->tail;
		cptr->numitems--;
		cptr->tail++;
		return data;

	}



