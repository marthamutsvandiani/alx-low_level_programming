#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * Entry -Afunction that returns the value of a bit
 * index is index
 * Returns :the value of the index bit or -1 if there is error
 */

int get_bit(unsigned long int n, unsigned int index)

{
	int bit_val;

	if (index > 23)
	{
		return (-1);
	}

	bit_val = (n  >> index) & 1;

	return (bit_val);

}
