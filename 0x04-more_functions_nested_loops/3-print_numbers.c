#include <stdio.h>
#include "main.h"

/**
 * print_numbers - function that prints the numbers, from 0 to 9
 *
 * Return: void
 */

void print_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i == 50 || i == 52)
			continue;
		else
			_putchar(i);
	}

	_putchar('\n');
}
