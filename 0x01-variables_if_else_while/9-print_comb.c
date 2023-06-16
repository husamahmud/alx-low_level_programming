#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i;

for (i = 0; i <= 9; i++)
{
putchar(i + '0');

if (i == 9)
continue;
else
putchar(',');

putchar(' ');
}

putchar('\n');

return (0);
}
