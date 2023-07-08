#include "main.h"
#include <stdio.h>

/**
 * _strstr - function that locates a substring
 * @haystack: pointer to the string to be searched
 * @needle: pointer to the substring to be located
 * Return: pointer to the first occurrence of the substring in the string,
 * or a null pointer if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	while (*haystack != '\0')
	{
		i = 0;
		j = 0;

		while (needle[j] != '\0' && haystack[i] == needle[j])
			i++, j++;

		if (needle[j] == '\0')
			return (haystack);

		haystack++;
	}
	return (NULL);
}
