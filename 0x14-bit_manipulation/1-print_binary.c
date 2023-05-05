#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <unistd.h>


/**
 * a function to return value of bit at any given index
 * @index -starts from 0 of the bit
 * Returns -nothing
 */

void print_binary(unsigned long int n)

{
	char j;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n == 1)
	{
		_putchar('1');
		return;
	}
	print_binary(n >> 1);
	j = (n & 1) ? '1' : '0';
	_putchar(j);

}
