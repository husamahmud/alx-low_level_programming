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

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				count++;
				break;
			}
			else if (accept[i + 1] == '\0')
			{
				return (count);
			}
		}
		s++;
	}
	return (count);
}
