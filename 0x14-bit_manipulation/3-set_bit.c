#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include "main.h"

/**
 * Entry -A function that sets the value of a bit to 1
 *@n -number to change
 *@index is index from 0
 *Return : 1 if it works,-1 if therre is an error
 */

int set_bit(unsigned long int *n, unsigned int index)
{

if (index >= sizeof(unsigned long int) * 8)
{
return (-1);
}

*n |= (1UL << index);
return (1);

}
