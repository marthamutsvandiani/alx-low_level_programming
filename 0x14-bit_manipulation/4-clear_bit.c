#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * Entry-a function that sets the value of a bit to 0 at a given index.
 * @index is the index from 0
 * @n is the number
 * Returns 1 if it worked or -1 if an error occured
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n &= ~(1ul << index);

	return (1);

}
