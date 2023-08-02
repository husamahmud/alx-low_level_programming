#include "main.h"
#include <string.h>

/**
 * isNumeric - checks if a string is a number
 * @s: string
 * Return: 1 if number, 0 if not
 */
int isNumeric(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		if (s[i] < '0' || s[i] > '9')
			return (0);
	return (1);
}

/**
 * printMul - prints the result of the multiplication
 * @result: array of integers
 * @len: length of result
 * Return: void
 */
void printMul(int *result, int len)
{
	int i;

	/* remove leading zeros */
	for (i = 0; i < len && result[i] == 0; i++);

	/* if all digits are 0, print 0 */
	if (i == len)
		printf("0");

	/* print the result */
	for (; i < len; i++)
		printf("%d", result[i]);

	printf("\n");
}

/**
 * main - multiplies two positive numbers
 * @argc: args count
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i, j, len1, len2;
	int *result;

	if (argc != 3 || !isNumeric(argv[1]) || !isNumeric(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}

	len1 = strlen(argv[1]);
	len2 = strlen(argv[2]);

	result = calloc(len1 + len2, sizeof(int));
	if (result == NULL)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			int mul = (argv[1][i] - '0') * (argv[2][j] - '0');
			int sum = result[i + j + 1] + mul;

			result[i + j] += sum / 10;
			result[i + j + 1] = sum % 10;
		}
	}
	printMul(result, len1 + len2);
	free(result);
	return (0);
}
