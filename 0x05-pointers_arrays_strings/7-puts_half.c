#include "main.h"
#include <stdio.h>

/**
 * puts_half - function that prints half of a string
 * @str: string to be print
 */
void puts_half(char *str)
{
	int len = 0, i, start = 0;

	while (str[len] != '\0')
		len++;

	start = len / 2 + (len % 2);
	for (i = start; i < len; i++)
		printf("%c", str[i]);

	printf("\n");
}
