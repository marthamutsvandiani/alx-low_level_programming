#include "main.h"

/**
 * checkd for bg or small endiane
 * endiane mens the order in which bytes are stored in comp memory
 * Returns 0 for bg endianne or 0 for small
 */

int get_endianness(void)
{
	int num;
	char *adrs;

	num = 2;
	adrs = (char *)&num;
	if (*adrs)
		return (1);
	return (0);
}

