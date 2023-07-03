#include "main.h"

/**
 * set_string - function that sets the value of a pointer to a char
 * @s: pointer to a pointer to a char
 * @to: pointer to a char
 */
void set_string(char **s, char *to)
{
	*s = to;
}
