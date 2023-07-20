#include "3-calc.h"

/**
 * main - Entry point
 * @argc: The number of command-line arguments provided
 * @argv: An array of strings containing the command-line arguments
 * Description:
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int (*op_ptr)(int, int), a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	op_ptr = get_op_func(argv[2]);
	if (!op_ptr)
	{
		printf("Error\n");
		exit(99);
	}

	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", op_ptr(a, b));

	return (0);
}
