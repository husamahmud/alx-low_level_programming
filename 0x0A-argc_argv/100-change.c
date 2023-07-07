#include <stdio.h>
#include <stdlib.h>

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
	int coins_val[5] = {25, 10, 5, 2, 1}, min = 0, money, i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	money = atoi(argv[1]);
	while (money)
	{
		for (i = 0; i < 5; i++)
		{
			if (money >= coins_val[i])
			{
				money -= coins_val[i];
				min++;
				break;
			}
		}
	}

	printf("%d\n", min);

	return (0);
}
