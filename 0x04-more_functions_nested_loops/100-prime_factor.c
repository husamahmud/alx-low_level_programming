#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: program that finds and prints the largest prime factor
 * of the number 612852475143
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int i, max, n = 612852475143;

	for (i = 2; i * i <= n; i++)
		while (n % i == 0)
		{
			max = i;
			n /= i;
		}

	if (n > 1)
		max = n;

	printf("%ld\n", max);

	return (0);
}
