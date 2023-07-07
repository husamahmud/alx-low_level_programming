#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 * Description: program that adds positive numbers
 * @argc: The number of command-line arguments passed to the program
 * @argv: An array of strings containing the command-line arguments
 * Return: If one of the number contains symbols that are not digits return (1)
 * otherwise return (0)
 */
int main(int argc, char *argv[])
{
	int i, j, num, sum = 0;

	if (argc == 1)
		return (printf("0\n"), 1);

	for (i = 1; i < argc; i++)
	{
		for (j = 1; j < argc; j++)
		{
			if (!(*argv[j] >= '1' && *argv[j] <= '9'))
				return (printf("Error\n"), 1);
		}

		num = atoi(argv[i]);
		if (num <= 0)
			return (printf("Error\n"), 1);

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
