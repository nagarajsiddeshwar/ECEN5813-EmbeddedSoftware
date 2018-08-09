/*

File name - CircularBuffer.h

Author- Nagaraj 

This header file shall declare the members in a circular buffer 
that will be called in CircularBuffer.c

*/

	typedef struct 

	{
		uint8_t *start;
		uint8_t *end;
		uint8_t *head; 
		uint8_t *tail;
		uint8_t *numitems;
		uint8_t *size;
	
	}circular_buff_t;
