#include <stdio.h>
#include "main.h"


/**
 * Entry -a function that checks the endianness.
 * Returns 0 if big endiens, 1 if little endien
 *Endienes refers to the order in which bytes are stored in memory
 */

int get_endianness(void)
{
	unsigned int y = 0x76543210;
	char *c = (char *) &y;
	 return (*c == 0x10);
}
