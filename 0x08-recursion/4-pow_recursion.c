#include "main.h"

/**
 * _pow_recursion - function that returns the value of x raised to
 * the power of y
 * @x: base number
 * @y: exponent or power
 * Return: (-1) if y is lower than 0, (x) if y equal to 1,
 * (1) if y equal to zero
 * otherwise returns the power of a number
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 1)
		return (x);
	else if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
