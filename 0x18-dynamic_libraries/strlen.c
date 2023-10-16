#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: Pointer to the null-terminated string
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
