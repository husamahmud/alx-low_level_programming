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
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	while (i < n)
		dest[i++] = '\0';

	return (dest);
}
