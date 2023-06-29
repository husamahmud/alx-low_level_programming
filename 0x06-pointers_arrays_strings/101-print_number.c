#include "main.h"

/**
 * print_number - function that prints an integer
 * @n: The integer to be printed
 */
void print_number(int n)
{
	unsigned int digit;

	digit = n;

	if (n < 0)
	{
		_putchar('-');
		digit = -n;
	}

	if (digit / 10 != 0)
	{
		print_number(digit / 10);
	}
	_putchar((digit % 10) + '0');
}
