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

int binary_recurtion(int *array, int left, int right, int value);

/**
* advanced_binary -	function that searches for a value in
* an array of integers using the advanced binary search algorithm
* @array: array of integers
* @size: size of array
* @value: value that i searched in array
* Return: return the index of value, and if it doesn't exist return -1
*/
int advanced_binary(int *array, size_t size, int value)
{
	if (!array || size == 0)
		return (-1);
	return (binary_recurtion(array, 0, (int) size - 1, value));
}

/**
* binary_recurtion - function that searches for a value in
* an array of integers using the binary search algorithm in recursion way
* @array: array of integers
* @left: start of an array
* @right: end of array of an array
* @value: value that i searched in array
* Return: return the index of value, and if it doesn't exist return -1
*/

int binary_recurtion(int *array, int left, int right, int value)
{
	int mid = (left + right) / 2;

	printf("Searching in array: ");
	print_array(array, left, right);
	if (left >= right)
		return (-1);
	if (array[mid] == value)
	{
		if (array[mid - 1] != value)
			return (mid);
		else
			return (binary_recurtion(array, left--, mid, value));
	} else if (value < array[mid])
		return (binary_recurtion(array, left, mid - 1, value));
	else
		return (binary_recurtion(array, mid + 1, right, value));
}
