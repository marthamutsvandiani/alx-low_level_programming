#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>


/**
 *Entry -A function that prints the binary representation of a number
 *@n -the integer to be printed in binary form
 *Returns 0
 */

void print_binary(unsigned long int n)

{
	int x;

	int count = 0;

	unsigned long int current;

	for (x = 23; x >= 0; x--)
	{

	current = n >> x;

if (current & 1)

{

putchar('1');
count++;
}
else if (count)
putchar('0');
}
if (!count)
putchar('0');

}



