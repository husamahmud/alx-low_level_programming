#include "search_algos.h"

/**
* jump_search -	function that searches for a value in
* an array of integers using the jump search algorithm
* @array: array of integers
* @size: size of array
* @value: value that i searched in array
* Return: return the index of value, and if it doesn't exist return -1
*/
int jump_search(int *array, size_t size, int value)
{
	int prev = 0, step = 0, len = (int) size;

	if (!array || size <= 0)
		return (-1);

	while (step < len && prev < len)
	{
		if (array[step] >= value)
			break;
		printf("Value checked array[%d] = [%d]\n", step, array[step]);
		prev = step;
		step += (int) sqrt(len);
	}
	printf("Value found between indexes [%d] and [%d]\n", prev, step);
	while (prev < len && prev <= step)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
		prev++;
	}
	return (-1);
}
