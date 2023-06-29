#include "main.h"

/**
 * rot13 - function that encodes a string using rot13
 * @str: The string to be encoded
 *
 * Return: A pointer to the encoded string
 */
char *rot13(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (((str[i] >= 'a') && (str[i] <= 'z')) || ((str[i] >= 'A') && (str[i] <= 'Z')))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = 'a' + (str[i] - 'a' + 13) % 26;
			else
				str[i] = 'A' + (str[i] - 'A' + 13) % 26;
		}
	}

	return (str);
}
