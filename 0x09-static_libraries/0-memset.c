#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 * @s: pointer to the memory area to be filled
 * @b: the value to be set
 * @n: number of bytes to be set to the value
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (i = 0; i < (int) n; i++)
	{
		s[i] = b;
	}

	return (s);
}
