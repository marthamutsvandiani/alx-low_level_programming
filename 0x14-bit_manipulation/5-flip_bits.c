#include <stdio.h>
#include "main.h"

/**
 * Entry-a function that returns the number of bits you would need to flip to get from one number to another
 * @n the 1st integer
 * @m the second integer
 * Returns :thee count of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int xor_value = n ^ m;

unsigned int count = 0;

while (xor_value != 0)
{
count += (xor_value & 1);
xor_value >>= 1;

}
    return (count);
}
