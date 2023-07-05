#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: pointer to the string to check
 * Return: 1 if a string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	int i, j, len = strlen(s), checker = 0;

	if (len <= 1)
		return (1);

	for (i = 0, j = len - 1; s[i] != '\0'; i++, j--)
	{
		if (s[i] != s[j])
		{
			checker++;
			break;
		}
	}

	if (checker == 0)
		return (1);
	else
		return (0);
}
