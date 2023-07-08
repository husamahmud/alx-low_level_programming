#include "main.h"

/**
 * _strcpy - function that copies the string pointed to by src
 * @dest: the buffer to copy the string to
 * @src: the string to be copied
 *
 * Return: a pointer to the destination string dest
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0, i;

	while (src[len] != '\0')
		len++;
	for (i = 0; i <= len; i++)
		dest[i] = src[i];

	return (dest);
}
