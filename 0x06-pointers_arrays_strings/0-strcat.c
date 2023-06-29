#include "main.h"
#include <string.h>

/**
 * _strcat - function that concatenates two strings
 * @dest: A pointer to the destination string
 * @src: A pointer to the source string
 *
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);

	return (dest);
}
