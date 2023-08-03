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
	unsigned int result;
	unsigned long int flip;

	result = 0;
	flip = n ^ m;
	while (flip)
	{
		result += flip & 1;
		flip = flip >> 1;
	}
	return (result);
}
