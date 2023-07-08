#include <stdio.h>

/**
 * _isupper - checks for uppercase character
 * @c: the character to check
 *
 * Description: program that checks for uppercase character
 *
 * Return: (1) if the character is uppercase
 *         (0) otherwise
 */

int _isupper(int c)
{
	return (c >= 65 && c <= 90 ? 1 : 0);
}
