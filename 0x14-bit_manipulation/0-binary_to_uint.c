#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: the binary strign to convert
 *
 * Return: the converted unsigned integer
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		dec = dec * 2 + (*b - '0');

		b++;
	}

	return (dec);
}
