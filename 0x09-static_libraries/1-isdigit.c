#include <stdio.h>

/**
 * _isdigit - checks for uppercase character
 * @c: the character to check
 *
 * Description: checks for a digit (0 through 9)
 *
 * Return: (1) if c is a digit
 *         (0) otherwise
 */

int _isdigit(int c)
{
	return (c >= 48 && c <= 57 ? 1 : 0);
}
