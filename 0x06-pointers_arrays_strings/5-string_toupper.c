#include "main.h"

/**
 * string_toupper - function that changes all lowercase letters
 * of a string to uppercase
 * @str: The string to convert
 *
 * Return: A pointer to the resulting string
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;

		i++;
	}

	return (str);
}
