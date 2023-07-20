#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: the string to print between integers
 * @n: the number of integers to print
 * @...: the integers to print
 *
 * Return: Nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	int val;
	unsigned int i;

	if (!n)
	{
		printf("\n");
		return;
	}

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		val = va_arg(args, int);
		printf("%d", val);
		if (i < n - 1)
			printf("%s", (separator) ? separator : "");
	}
	printf("\n");

	va_end(args);
}
