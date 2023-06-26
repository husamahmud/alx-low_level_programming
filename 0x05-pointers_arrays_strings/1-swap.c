#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 * @a: param to be swapped
 * @b: param to be swapped
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
