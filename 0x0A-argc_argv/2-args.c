#include <stdio.h>

/**
 * main - Entry point
 * Description: program that prints all arguments it receives
 * @argc: The number of command-line arguments passed to the program
 * @argv: An array of strings containing the command-line arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv);
		argv++;
	}

	return (0);
}
