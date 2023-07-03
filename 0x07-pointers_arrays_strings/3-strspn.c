#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: pointer to the string to be scanned
 * @accept: pointer to the string containing the set of accepted characters
 * Return: the length of the prefix substring that consists entirely of
 * characters from the set of accepted characters
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	unsigned int count = 0;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (s[i] != accept[i])
				count++;
			else
				break;
		}
		s++;

		if (accept[i] != '\0')
			return (count);
	}
	return (0);
}
