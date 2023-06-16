#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints the alphabet except q and e
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char i;

for (i = 'a'; i <= 'z'; i++)
{
if (i == 'q' || i == 'e')
continue;
else
putchar(i);
}

putchar('\n');
return (0);
}
