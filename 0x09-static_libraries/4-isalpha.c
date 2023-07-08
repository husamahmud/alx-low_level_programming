#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: the character to check
 *
 * Description: program that checks for alphabetic character
 *
 * Return: Always 0 (Success)
 */

int _isalpha(int c)
{
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) ? 1 : 0);
}
