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
	unsigned int nbits;

	for (nbits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			nbits++;
	}

	return (nbits);
}
