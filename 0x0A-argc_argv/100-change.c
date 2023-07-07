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
	int min_coins = 0, i, amount;
	int coins_val[] = {25, 10, 5, 2, 1};

	if (argc != 2 || !isdigit(argv[1][0]))
		return (printf("Error\n"), 1);

	amount = atoi(argv[1]);

	for (i = 0; i < (int) strlen(argv[1]); i++)
	{
		if (!isdigit(argv[1][i]))
			return (printf("Error\n"), 1);
	}

	while (amount > 0)
	{
		for (i = 0; i < 5; i++)
		{
			if (coins_val[i] <= amount)
			{
				amount -= coins_val[i];
				min_coins++;
				break;
			}
		}
	}
	printf("%d\n", min_coins);

	return (0);
}
