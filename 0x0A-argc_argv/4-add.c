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
	int i = 1, num;
	long int sum = 0;
	char *p;

	if (argc <= 1)
	{
		printf("0\n");
		return (1);
	}

	for (; i < argc; i++)
	{
		for (p = argv[i]; *p != '\0'; p++)
		{
			if (!isdigit(*p))
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(argv[i]);

		if (num <= 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
	}
	printf("%ld\n", sum);

	return (0);
}
