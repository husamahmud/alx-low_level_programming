#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 *
 * Return: Nothing.
 */
void print_all(const char *const format, ...)
{
	va_list args;

	int i = 0, len = 0;
	char *sep = ", ", *str;

	while (format && format[len])
		len++;

	va_start(args, format);

	while (format && format[i])
	{
		if (i == len - 1)
			sep = "";

		switch (format[i])
		{
			case 'c':
				printf("%c%s", va_arg(args, int), sep);
				break;
			case 'i':
				printf("%d%s", va_arg(args, int), sep);
				break;
			case 'f':
				printf("%f%s", va_arg(args, double), sep);
				break;
			case 's':
				str = va_arg(args, char *);
				printf("%s%s", str ? str : "(nil)", sep);
				break;
		}
		i++;
	}
	printf("\n");

	va_end(args);
}
