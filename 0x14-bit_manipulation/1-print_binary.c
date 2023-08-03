#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: integer to be print
 *
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	int i;
	int j = 0;
	unsigned long int y;

	for (i = 63; i >= 0; i--)
	{
		y = (n >> i) & 1;
		if (y == 1)
			j = 1;
		if (j == 1)
			_putchar(((n >> i) & 1) + '0');
	}
	if (n == 0)
		_putchar('0');
}
