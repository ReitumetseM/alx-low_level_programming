#include "main.h"

/**
 * Swap_int -  swaps the values of two integers
 * @a: integer to swap
 * @b: integer to swap
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	
     	*a = *b;
   	 *b = temp;
}
