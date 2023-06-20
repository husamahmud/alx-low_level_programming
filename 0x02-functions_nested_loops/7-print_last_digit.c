#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 * @n: the character to check
 *
 * Description: program that prints the last digit of a number
 *
 * Return: Always 0 (Success)
 */

int print_last_digit(int n)
{
	int last_digit;
	(n > 0) ? (last_digit = -1 * (n % 10)) : (last_digit = n % 10);

	_putchar(last_digit + '0');

	return (last_digit);
}
