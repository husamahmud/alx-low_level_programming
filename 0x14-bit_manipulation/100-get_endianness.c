#include "main.h"

/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	unsigned int j = 1;
	char *c = (char *) &j;

	if (*c)
		return (1);
	return (0);
}
