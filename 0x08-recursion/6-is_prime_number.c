#include "main.h"

/**
 * is_prime_helper - helper function for is_prime_number()
 * @n: the number to check
 * @i: the current divisor to check
 * Return: 1 if the number is prime, 0 otherwise
 */
int is_prime_helper(int n, int i)
{
	if (n < 2)
		return (0);

	if (i * i > n)
		return (1);

	if (n % i == 0)
		return (0);

	return (is_prime_helper(n, i + 1));
}

/**
 * is_prime_number - Checks if a given number is prime
 * @n: the number to check
 * Return: (1) if the number is prime, (0) otherwise
 */
int is_prime_number(int n)
{
	return (is_prime_helper(n, 2));
}
