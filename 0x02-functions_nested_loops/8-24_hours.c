#include "main.h"

/**
 * jack_bauer - function that prints every minute of the day of Jack Bauer
 *
 * Description: program that prints every minute of the day of Jack Bauer
 *
 * Return: Always 0 (Success)
 */

void jack_bauer(void)
{
	int i, j;

	for (i = 0; i < 24; i++)
		for (j = 0; j < 60; j++)
			printf("%02d:%02d\n", i, j);

	return (0);
}
