#include "main.h"

/**
 * factorial - function that returns the factorial of a given number
 * @n: the int to get its factorial
 * Return: (-1) if `n` lower than 0, otherwise return the factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return 1;

	return (n * factorial(n - 1));
}
