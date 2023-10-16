#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: A pointer to the first string
 * @s2: A pointer to the second string
 *
 * Return: A negative integer if s1 is less than s2
 *				0 if they are equal,
 *        A positive integer if s1 is greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	int len_s1 = 0, len_s2 = 0, len = 0, i, res = 0;

	while (s1[len_s1] != '\0')
		len_s1++;

	while (s2[len_s2] != '\0')
		len_s2++;

	(len_s1 >= len_s2) ? (len = len_s1) : (len = len_s2);

	for (i = 0; i <= len; i++)
	{
		if (*s1 != *s2)
		{
			res = (int) *s1 - (int) *s2;
			break;
		}
		s1++;
		s2++;
	}

	return (res);
}
