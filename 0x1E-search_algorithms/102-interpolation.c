#include "search_algos.h"

/**
* interpolation_search -	function that searches for a value in
* an array of integers using the interpolation search algorithm
* @array: array of integers
* @size: size of array
* @value: value that i searched in array
* Return: return the index of value, and if it doesn't exist return -1
*/
int interpolation_search(int *array, size_t size, int value)
{
	size_t low, mid, high;

	low = 0;
	high = (int) size - 1;

	if (!array || size == 0)
		return (-1);
	while (array[low] != array[high] && value >= array[low] &&
	       value <= array[high])
	{
		mid = low + (((double) (high - low) / (array[high] - array[low])) *
		             (value - array[low]));

		printf("Value checked array[%ld] = [%d]\n", mid, array[mid]);
		if (value > array[mid])
			low = mid + 1;
		else if (value < array[mid])
			high = mid - 1;
		else
			return (mid);
	}
	mid = low + (((double) (high - low) / (array[high] - array[low])) *
	             (value - array[low]));
	printf("Value checked array[%ld] is out of range\n", mid);
	return (-1);
}
