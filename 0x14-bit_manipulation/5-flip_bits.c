#include <stdio.h>
#include "main.h"

/**
 * a function that has number of bits to flip
 * Returns number of bits to flip
 */


unsigned int flip_bits(unsigned long int n, unsigned long int m)

{
	unsigned long int result;
	unsigned long int count;

	result = n ^ m;
	for (count = 0; result > 0;)
	{
		if ((result & 1) == 1)
			count++;
		result = result >> 1;
	}

	return (count);
}
