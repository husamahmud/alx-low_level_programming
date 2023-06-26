#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords
 * for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int res = 0;
	char c;

	srand(time(NULL));
	while (res <= 2645)
	{
		c = rand() % 128;
		res += c;
		putchar(c);
	}
	putchar(2772 - res);

	return (0);
}
