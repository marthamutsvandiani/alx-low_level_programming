#include <stdio.h>
#include "main.h"

/**
 * sets the value of a bit to 0 at a given index
 * @index -the  index of a bit
 * Returns 1 success or -1 error
 */

int clear_bit(unsigned long int *n, unsigned int index)

{
	unsigned long int mask;

	mask = 1;
	mask = mask << index;
	if (index > sizeof(unsigned long int) * 8 || n == NULL)
		return (-1);
	if (((*n >> index) & 1) == 1)
		*n = mask ^ *n;

	return (1);
}
