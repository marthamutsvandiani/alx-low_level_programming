#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>


/**
 * Entry- A function that converts a binary number to an unint
 * @b -binary
 * Returns : The converted number or 0
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)

{
	int z;
unsigned int decimal_value;
decimal_value = 0;

if (!b)
{
	return (0);
}

for (z = 0; b[z]; z++)
{
	if (b[z] < '0' || b[z] > '1')
		return (0);
	decimal_value = 2 * decimal_value + (b[z] - '0');

}

	return (decimal_value);

	}

