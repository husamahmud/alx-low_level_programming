#include "main.h"

/**
 * puts2 - prints a character and skip the next one in the string
 * @str: string to be print
 */

void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}
