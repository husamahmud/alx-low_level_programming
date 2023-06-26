#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints n elements of an array of integers
 * @a: the array to be printed
 * @n: length of the array
 */
void print_array(int *a, int n)
{
	int i = 0;

	printf("%d", a[0]);
	for (i = 1; i < n; i++)
		printf(", %d", a[i]);
	printf("\n");
}
