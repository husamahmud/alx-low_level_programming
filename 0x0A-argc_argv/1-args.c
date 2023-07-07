#include <stdio.h>

/**
 * main - Entry point
 * Description: program that prints the number of arguments passed into it
 * @argc: The number of command-line arguments passed to the program
 * @argv: An array of strings containing the command-line arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);

	(void) argv;
	return (0);
}
