#include <stdio.h>

/**
 * main - Entry point
 * Description: program that prints its name, followed by a new line
 * @argc:
 * @argv:
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);

	return (0);
}
