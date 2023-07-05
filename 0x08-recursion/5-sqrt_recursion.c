#include "main.h"

/**
 * _sqrt - calculates the square root of a given number recursively
 * @n: the number to calculate the square root of
 * @val: the current guess for the square root
 * Return: the square root of the number or (-1) if it doesn't
 */
int _sqrt(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (_sqrt(n, val + 1));
	else
		return (-1);
}

/**
 * _sqrt_recursion - wrapper function that calls _sqrt to calculate the square
 * root of a given number recursively
 * @n: the number to calculate the square root of
 * Return: the square root of the number or (-1) if it doesn't
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
