#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: program that multiplies two numbers
 * @argc: The number of command-line arguments passed to the program
 * @argv: An array of strings containing the command-line arguments
 * Return: if program does not receive two arguments return (1)
 * otherwise return (0)
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
