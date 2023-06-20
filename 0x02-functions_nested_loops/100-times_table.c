#include "main.h"

/**
 * print_times_table - function that prints the n times table
 */

void print_times_table(int n)
{
	int i, j;

	if (n > 15 || n < 0)
		return;

	printf("0");

	for (i = 0; i <= 9; i++)
	{
		printf("0");
		for (j = 1; j <= 9; j++)
		{
			(i * j < 10) ? printf(",   %d", i * j) : printf(",  %d", i * j);
		}
		printf("\n");
	}
}
