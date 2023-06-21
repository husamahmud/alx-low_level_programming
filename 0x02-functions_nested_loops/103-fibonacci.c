#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: program finds and prints the sum of the even-valued terms
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long a = 0, b = 1, c, sum = 0;

	while (b <= 4000000)
	{
		c = a + b;
		a = b;
		b = c;

		if (b % 2 == 0)
			sum += b;
	}

	printf("%lu\n", sum);

	return (0);
}
