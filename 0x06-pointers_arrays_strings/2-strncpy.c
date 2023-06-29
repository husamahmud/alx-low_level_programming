#include "main.h"
#include <stdio.h>

/**
 * _strncpy - function that copies a string
 * @dest: A pointer to the destination string.
 * @src: A pointer to the source string.
 * @n: The maximum number of characters to copy.
 *
 * Return: A pointer to the resulting string dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	if (dest == NULL)
		return NULL;

	while (n--)
	{
		dest[i] = src[i];
		i++;
	}

	dest[n] = '\0';

	return (dest);
}
