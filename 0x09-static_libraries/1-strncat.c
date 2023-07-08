#include "main.h"
#include <string.h>

/**
 * _strncat - Concatenates two strings up to a specified number of characters
 * @dest: A pointer to the destination string
 * @src: A pointer to the source string
 * @n: The maximum number of characters to concatenate
 *
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
