#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the
 * two diagonals of a square matrix of integers
 * @a: pointer to the first element of the matrix
 * @size: size of the matrix (number of rows and columns)
 */
void print_diagsums(int *a, int size)
{
	int i, diagSum1 = 0, diagSum2 = 0;

	for (i = 0; i < size; i++)
	{
		diagSum1 += *(a + i * size + i);
		diagSum2 += *(a + i * size + size - 1 - i);
	}

	printf("%d, %d\n", diagSum1, diagSum2);
}
