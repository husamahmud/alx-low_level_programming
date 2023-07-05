#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: the string to get its length
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_palindrome - Checks if a string is a palindrome recursively
 * @s: The string to check
 * @i: The index of the first character to compare
 * @len: The length of the string
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int check_palindrome(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);

	if (i >= len)
		return (1);

	return (check_palindrome(s, i + 1, len - 1));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 * Return: 1 if a string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);

	return (check_palindrome(s, 0, _strlen_recursion(s)));
}
