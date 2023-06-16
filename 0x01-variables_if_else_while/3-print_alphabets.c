#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints the alphabet in lowercase & uppercase
 *
 * Return: always 0 (Success)
 */

int main(void)
{
char i;

for (i = 'a'; i <= 'z'; i++)
putchar(i);

for (i = 'A'; i <= 'Z'; i++)
putchar(i);

putchar('\n');

return (0);
}
