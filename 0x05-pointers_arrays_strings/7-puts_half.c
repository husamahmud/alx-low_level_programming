#include "main.h"
#include <stdio.h>

/**
 * puts_half - function that prints half of a string
 * @str: string to be print
 */
void puts_half(char *str)
{
	int len = 0, i;

	while (str[len] != '\0')
		len++;

	if (len % 2 == 0)
		for (i = (len / 2); i < len; i++)
			printf("%d", str[i]);
	else
		for (i = ((len - 1) / 2); i < len; i++)
			printf("%d", str[i]);
	printf("\n");
}
