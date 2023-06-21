#include "main.h"

/**
 * positive_or_negative - function that prints the alphabet, in lowercase
 *
 * Description: test that the function positive_or_negative()
 * gives the correct output
 *
 * @n: the character to check
 */

void positive_or_negative(int n)
{
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("0 is zero\n");
}
