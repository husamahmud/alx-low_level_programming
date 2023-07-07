#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

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
	int num, i, res = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
		return (printf("Error\n"), 1);

	num = atoi(argv[1]);

	if (num < 0)
		return (printf("0\n"), 0);

	for (i = 0; num >= 0 && i < 5; i++)
	{
		while (num >= coins[i])
		{
			res++;
			num -= coins[i];
		}
	}
	printf("%d\n", res);

	return (0);
}
