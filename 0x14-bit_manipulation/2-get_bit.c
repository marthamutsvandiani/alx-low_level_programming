#include <stdio.h>
#include "main.h"

/**
 * Returns the value of a bit at a given index
 * @n :number to search
 * @index :index of the bit
 * Return :bit value
 */

int get_bit(unsigned long int n, unsigned int index)

{
	unsigned int j;

	if (index > (sizeof(8) * 8))
		return (-1);

	for (j = 0; j < index; j++)
		n = n >> 1;
	return ((n & 1));
}
