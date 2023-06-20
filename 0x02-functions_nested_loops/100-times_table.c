#include "main.h"

/**
 * print_times_table - function that prints the n times table
 * @n: prints the n times table
 */

void print_times_table(int n)
{
	int i, j;

	if (n > 15 || n < 0)
		return;

	for (i = 0; i <= n; i++)
	{
		printf("0");
		for (j = 1; j <= n; j++)
		{
			if (i * j < 10)
				printf(",   %d", i * j);
			else if (i * j < 100)
				printf(",  %d", i * j);
			else
				printf(", %d", i * j);
		}
		printf("\n");
	}
}
