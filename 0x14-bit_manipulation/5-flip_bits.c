#include "main.h"

/**
 * flip_bits - Returns the number of bits needed to flip to get from one number to another.
 * @n: The first integer.
 * @m: The second integer.
 *
 * Return: The number of bits needed to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xorval = n ^ m;
	unsigned int count = 0;

	while (xorval)
	{
		if (xorval & 1ul)
			count++;
		xorval = xorval >> 1;
	}
	return (count);
}
