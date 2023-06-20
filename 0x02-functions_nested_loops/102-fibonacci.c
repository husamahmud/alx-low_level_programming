#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: program that prints the first 50 Fibonacci
 * numbers starting with 1 and 2
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long n1 = 1, n2 = 2, next, i;

	printf("%ld, %ld, ", n1, n2);

	for (i = 0; i < 48; i++)
	{
		next = n1 + n2;

		if (i != 47)
			printf("%ld ,", next);
		else
			printf("%ld", next);

		n1 = n2;
		n2 = next;
	}

	printf("\n");

	return (0);
}
