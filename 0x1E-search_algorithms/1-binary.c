#include "search_algos.h"

/**
 * print_array - function that prints n elements of an array of integers
 * @arr: the array to be printed
 * @start: the start index
 * @end: the end index
 * Return: Nothing
 **/
void print_array(int *arr, int start, int end)
{
	int i;

	for (i = start; i < end; i++)
	{
		printf("%d", arr[i]);
		if (i != end - 1)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - searches for a value in a sorted array of integers using the
 * Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: the first index where value is located, or -1 if value is not
 **/
int binary_search(int *array, size_t size, int value)
{
	int l = 0, r = size, m;

	while (l < r)
	{
		printf("Searching in array: ");
		print_array(array, l, r);
		m = l + (r - l) / 2;

		if (array[m] < value)
			l = m + 1;
		else if (array[m] > value)
			r = m - 1;
		else
		{
			printf("Searching in array: ");
			print_array(array, m, r);
			return (m);
		}
	}

	return (-1);

}
