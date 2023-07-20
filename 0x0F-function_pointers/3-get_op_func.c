#include "3-calc.h"

/**
 * get_op_func - perform the operation asked by the user
 * @s: the operator passed as argument to the program
 *
 * Return: a pointer to the function that performs the requested
 * operation, or (NULL) if the input is not a valid operation or is NULL
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {{"+", op_add},
								{"-", op_sub},
								{"*", op_mul},
								{"/", op_div},
								{"%", op_mod},
								{NULL, NULL}};
	int i = 0;

	while (i < 5)
	{
		if (s && *(ops[i].op) == *s)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
