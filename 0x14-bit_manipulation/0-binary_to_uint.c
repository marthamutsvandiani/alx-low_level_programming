#include "main.h"
#include <stdio.h>

/**
 * Converting a binary number to an unsigned int
 * @ binary_to_uint - converts a binary number to an unsigned int
 * @ b: pointer to a string of 0 and 1 chars.
 * Return: converted number or 0 if b is NULL or contains non-0/1 chars
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int total, power;
	int len;

	if (b == NULL)
		return (0);

	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}

	for (power = 1, total = 0, len--; len >= 0; len--, power *= 2)
	{
		if (b[len] == '1')
			total += power;
	}

	return (total);
}
