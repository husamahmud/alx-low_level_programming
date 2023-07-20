#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: the string to print between integers
 * @n: the number of integers to print
 * @...: the integers to print
 *
 * Return: Nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *val;

	if (n == 0)
		return;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		val = va_arg(args, char*);
		printf("%s", val);
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(args);
}
