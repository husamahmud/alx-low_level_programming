#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @str: A pointer to the string to encode
 *
 * Return: A pointer to the resulting string
 */
char *leet(char *str)
{
	int i;
	char pattern[128] = {0};

	pattern['a'] = pattern['A'] = '4';
	pattern['e'] = pattern['E'] = '3';
	pattern['o'] = pattern['O'] = '0';
	pattern['t'] = pattern['T'] = '7';
	pattern['l'] = pattern['L'] = '1';

	for (i = 0; str[i] != '\0'; i++)
	{
		if (pattern[(unsigned char) str[i]])
			str[i] = pattern[(unsigned char) str[i]];
	}

	return (str);
}
