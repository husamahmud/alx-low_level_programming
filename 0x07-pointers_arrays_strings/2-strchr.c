#include "main.h"
#include <stdio.h>

/**
 * _strchr - function that locates a character in a string
 * @s: pointer to the string to be searched
 * @c: the character to be located
 * pointer to the first occurrence of the character c in the string s,
 * or a null pointer if the character is not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	return (NULL);
}
