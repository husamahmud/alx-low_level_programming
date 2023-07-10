#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: the first string to concatenate.
 * @s2: the second string to concatenate.
 *
 * Return: a pointer to the concatenated string, or NULL if either
 */
char *str_concat(char *s1, char *s2)
{
	size_t s1_len, s2_len, dest_len, i = 0;
	char *dest;

	if (!s1 || !s2)
		return (NULL);

	s1_len = strlen(s1);
	s2_len = strlen(s2);
	dest_len = s1_len + s2_len;
	dest = (char *) malloc(sizeof(char) * (s1_len + s2_len + 2));
	if (dest == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		dest[i] = s1[i];
	for (i = 0; s2[i]; i++)
		dest[s1_len + i] = s2[i];

	dest[dest_len] = '\0';

	return (dest);
}
