#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: The number of strings in the array.
 * @av: An array of strings to concatenate.
 *
 * Return: If memory allocation fails, returns NULL,
 * Otherwise, returns a pointer to the newly allocated
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, len = 0;
	char *dest = NULL;

	if (ac == 0 || !av)
		return (NULL);

	for (i = 0; i < ac; i++)
		len += strlen(av[i]) + 1;

	dest = (char *) malloc((len + 1) * sizeof(char));
	if (!dest)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j])
		{
			dest[k] = av[i][j];
			j++, k++;
		}
		dest[k] = '\n';
		k++;
	}

	dest[k] = '\0';

	return (dest);
}
