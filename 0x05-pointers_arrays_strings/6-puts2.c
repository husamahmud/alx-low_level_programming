#include "main.h"

/**
 * puts2 - prints a character and skip the next one in the string
 * @str: string to be print
 */

void puts2(char *str)
{
	int len = 0, i;

	while (str[len] != '\0')
		len++;
	for (i = 0; i < len; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
