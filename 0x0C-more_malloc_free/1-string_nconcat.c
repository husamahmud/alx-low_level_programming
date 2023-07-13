#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: the first string to concatenate.
 * @s2: the second string to concatenate.
 * @n: the maximum number of characters to concatenate from s2.
 *
 * Return: If the function failed - return (NULL)
 * Otherwise - returns a concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len1 = 0, len2 = 0, i, j;
	char *ptr;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2] && len2 < (int) n)
		len2++;

	ptr = (char *) malloc((len1 + len2 + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		ptr[i] = s1[i];
	for (j = 0; j < len2; j++)
		ptr[i + j] = s2[j];

	ptr[i + j] = '\0';

	return (ptr);
}
