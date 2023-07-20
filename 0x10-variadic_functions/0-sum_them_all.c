#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of n integers
 * @n: the number of integers to sum
 * @...: the integers to sum
 *
 * Return: the sum of the integers
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	va_end(args);
	return (sum);
}
