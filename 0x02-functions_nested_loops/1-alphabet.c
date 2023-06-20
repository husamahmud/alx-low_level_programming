#include <stdio.h>

/**
 * print_alphabet - prints the alphabet in lowercase
 */

void print_alphabet(void)
{
int i;
for (i = 'a'; i <= 'z'; i++)
{
putchar(i);
}
putchar('\n');
}

/**
 * main - Entry point
 *
 * Description: function that prints the alphabet
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
print_alphabet();
return (0);
}
