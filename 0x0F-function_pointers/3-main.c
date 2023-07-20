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
	int a, b;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op = argv[2];

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(a, b));

	return (0);
}
