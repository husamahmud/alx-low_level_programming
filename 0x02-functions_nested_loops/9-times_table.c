#include "main.h"

/**
 * jack_bauer - function that prints the 9 times table, starting with 0
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
			(j == 9) ? printf("%d", i * j) : printf("%d, ", i * j);
		printf("\n");
	}
}
