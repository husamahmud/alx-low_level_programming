#include "main.h"

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

	while (n--)
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
