#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: A pointer to the integer.
 * @index: The index of the bit to clear.
 *
 * Return: 1 for success, -1 for error.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int clear;

	if (index >= (sizeof(*n) * 8))
		return (-1);

	clear = 1;
	clear = clear << index;
	clear = ~clear;
	*n = *n & clear;

	return (1);
}
