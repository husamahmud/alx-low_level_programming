#include <string.h>
#include <stdlib.h>

/**
 * rev_str - function that reverse a string
 * @s: string
 *
 * Return: pointer to the reversed string
 */
char *rev_str(char *s)
{
	size_t len = strlen(s);
	size_t i, j;

	for (i = 0, j = len - 1; j > i; i++, j--)
	{
		char tmp = s[i];

		s[i] = s[j];
		s[j] = tmp;
	}
	return (s);
}

/**
 * *infinite_add - adds 2 strings
 * @n1: string 1
 * @n2: string 2
 * @r: result
 * @size_r: buffer size of result
 *
 * Return: resukt string
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, carry = 0, c, sum = 0;
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	char *res = malloc(sizeof(char) * (len1 + len2 + 1));

	for (i = len1 - 1, j = len2 - 1, c = 0;
				i >= 0 || j >= 0 || carry; i--, j--, c++)
	{
		sum = carry;

		if (i >= 0)
			sum += n1[i] - '0';
		if (j >= 0)
			sum += n2[j] - '0';

		res[c] = sum % 10 + '0';
		carry = sum / 10;
	}

	res[c] = '\0';

	if (c == 0)
		return (0);

	if ((int) strlen(res) + 1 > size_r)
		return (0);

	rev_str(res);
	r = strcpy(r, res);
	free(res);

	return (r);
}
