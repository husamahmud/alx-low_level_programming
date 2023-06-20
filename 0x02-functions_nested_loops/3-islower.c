#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: the character to check
 *
 * Description: program that checks for lowercase character
 *
 * Return: Always 0 (Success)
 */

int _islower(int c)
{
return (c >= 97 && c <= 122 ? 1 : 0);
}
