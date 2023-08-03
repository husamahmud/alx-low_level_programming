#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: the binary strign to convert
 *
 * Return: the converted unsigned integer
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	int num = 0;
	int digit;
	int dec = 0;
	int pow = 1;

	if (b == NULL)
		return (dec);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] >= '0' && b[i] <= '9')
			num = num * 10 + (b[i] - '0');
		else
			return (0);
	}

	i = 0;
	while (num != 0)
	{
		digit = num % 10;
		num /= 10;
		dec += digit * pow;
		i++;
		pow *= 2;
	}

	return (dec);
}
