#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a parameter
 * @str: the string to be copied
 *
 * Return:  a pointer to a new string which is a duplicate of the string str
 */
char *_strdup(char *str)
{
	char *dest;
	int i = 0;

	if (!str)
	{
		return (NULL);
	}
	dest = malloc(strlen(str) * sizeof(char));
	if (dest == NULL)
	{
		return (NULL);
	}
	while (*str)
	{
		dest[i] = *str;
		i++, str++;
	}
	dest[i] = '\0';
	return (dest);
}
