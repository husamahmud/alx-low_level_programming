#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: the string to be reversed
 */
void rev_string(char *s)
{
	char tmp;
	int len = 0, i, j;

	while (s[len] != '\0')
		len++;

	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
	}
}
