#include "main.h"

/**
 * times_table - function that prints the 9 times table, starting with 0
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		printf("0");
		for (j = 1; j <= 9; j++)
		{
			(i * j < 10) ? printf(",  %d", i * j) : printf(", %d", i * j);
		}
		printf("\n");
	}
}
