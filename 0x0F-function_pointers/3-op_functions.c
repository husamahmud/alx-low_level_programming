#include "3-calc.h"

/**
 * op_add - Add two integers
 * @a: the first int
 * @b: the second int
 *
 * Return: the sum of two integeres
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtract two integers
 * @a: the first int
 * @b: the second int
 *
 * Return: the difference of two integers
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiply two integers
 * @a: the first int
 * @b: the second int
 *
 * Return: the product of two integers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divide two integers
 * @a: the first int
 * @b: the second int
 *
 * Return: the division of two integers
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Computes the remainder of the division of two integers
 * @a: the first int
 * @b: the second int
 *
 * Return: the sumremainder of the division of two integers
 */
int op_mod(int a, int b)
{
	return (a % b);
}
