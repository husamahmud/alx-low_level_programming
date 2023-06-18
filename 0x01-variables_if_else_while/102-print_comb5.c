#include <stdio.h>
/**
 * main - entry point
 *
 * Description: A C program that prints combinations of two-digit numbers
 *
 * Return: 0
 */
int main(void)
{
int i, j;

for (i = 0; i < 100; i++)
{
for (j = i + 1; j < 100; j++)
{

putchar('0' + i / 10);
putchar('0' + i % 10);
putchar(' ');
putchar('0' + j / 10);
putchar('0' + j % 10);
if (i != 98)
{
putchar(',');
putchar(' ');
}
}
}

putchar('\n');

return (0);
}
