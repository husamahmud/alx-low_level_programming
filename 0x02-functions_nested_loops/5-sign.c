#include "main.h"

/**
 * print_sign - function that prints the sign of a number
 * @c: the character to check
 *
 * Description: program that prints the sign of a number
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return 1;
}
else if (n < 0)
{
_putchar('-');
return -1;
}
else
{
_putchar('0');
return 0;
}
}
