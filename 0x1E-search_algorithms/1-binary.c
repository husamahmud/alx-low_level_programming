#include "search_algos.h"

/**
 * print_array - print an array
 * @array: the array to print
 * @l: the left index
 * @r: the right index
 */
void print_array(int *array, int l, int r)
{
	int i;

	for (i = l; i <= r; i++)
	{
		printf("%d", array[i]);
		if (i < r)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - search for an element in an array
 * @array: the array we want to search in
 * @size: size of the array
 * @value: the target value
 * Return: the index of the value or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	int l = 0, r = size - 1, m;

	if (!array || size == 0)
		return (-1);

	while (l <= r)
	{
		printf("Searching in array: ");
		print_array(array, l, r);
		m = l + (r - l) / 2;

		if (array[m] > value)
			r = m - 1;
		else if (array[m] < value)
			l = m + 1;
		else
			return (m);
	}

	return (-1);
}
