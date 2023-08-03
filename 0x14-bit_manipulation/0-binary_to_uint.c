#include "main.h"


int _strlen(const char *s)
{
	int len = 0;

	while (s[len] != 0)
		len++;

	return (len);
}

int power(int base, int exp)
{
	int i;
	int num = 1;

	for (i = 0; i < exp; i++)
		num += base;

	return (num);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: the binary strign to convert
 *
 * Return: the converted unsigned integer
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	int len = _strlen(b);
	int i;

	if (b == NULL)
		return (0);

	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		dec += (b[i] - '0') * pow(2, len - i - 1);
	}

	return (dec);
}
