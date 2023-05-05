#include <stdio.h>
#include "main.h"

/**
 * sets the value of a bit to 1 at an index
 *@ index -index of a bit
 * Return: 1 if it work or -1 if an error occurs
 */

int set_bit(unsigned long int *n, unsigned int index)

{
	unsigned int aux;

	if (index > sizeof(unsigned int) * 16)
		return (-1);
	aux = 1;
	aux = aux << index;
	*n = ((*n) | aux);
	return (1);
}
