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
	char *str;

	va_start(args, n);


	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (!str)
			printf("(nil)");
		if (str)
			printf("%s", str);

		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");

	va_end(args);
}
