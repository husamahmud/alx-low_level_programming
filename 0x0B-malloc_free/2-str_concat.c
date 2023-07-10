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
	int i, j, s1_len, s2_len, dest_len;
	char *dest;

	s1_len = 0;
	s2_len = 0;
	i = j = 0;

	if (s1)
		s1_len = strlen(s1);
	if (s2)
		s2_len = strlen(s2);

	dest_len = s1_len + s2_len + 1;
	dest = (char *) malloc(dest_len * sizeof(char));
	if (dest == NULL)
		return (NULL);

	while (s1 && s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	while (s2 && s2[j])
	{
		dest[i] = s2[j];
		i++, j++;
	}
	dest[i] = '\0';

	return (dest);
}

