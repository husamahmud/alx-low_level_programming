#include "main.h"

/**
 * print_rev - function that prints a string, in reverse
 * @s: string to print
 *
 * Return: void
 */

void print_rev(char *s)
{
	int len = 0, i;

	while (s[len] != '\0')
		len++;
	for (
		i = len - 1;
		i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
