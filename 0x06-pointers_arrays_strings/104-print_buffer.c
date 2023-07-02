#include<stdio.h>

/**
 * print_buffer - function that prints a buffer
 * @b: a pointer to the buffer to be printed
 * @size: the size of the buffer in bytes
 */
void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		int c = 0;

		printf("%.8x: ", i);
		for (j = i; c < 10; j++, c++)
		{
			(i + c < size) ? printf("%02x", b[j]) : printf("  ");
			(j % 2) ? printf(" ") : 0;
		}

		c = 0;
		for (j = i; c < 10 && i + c < size; j++, c++)
			printf("%c", b[j] >= 32 ? b[j] : '.');

		putchar('\n');
	}
}
