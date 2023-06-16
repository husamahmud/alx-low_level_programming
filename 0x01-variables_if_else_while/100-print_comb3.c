#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: A C program that all different combinations of two digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int i, j;

for (i = 0; i <= 9; i++)
for (j = 1 + i; j <= 9; j++)
{
putchar(i + '0');
putchar(j + '0');

if (i != 8 || j != 9)
{
putchar(',');
putchar(' ');
}
}

putchar('\n');

return (0);
}
