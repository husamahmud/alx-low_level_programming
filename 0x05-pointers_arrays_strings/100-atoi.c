#include "main.h"

/**
 * _atoi - function that convert a string to an integer
 * @s: string to be converted
 */

int _atoi(char *s)
{
	int sign = 1, i = 0;
	unsigned int result = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			result *= 10;
			result += (s[i] - '0');
		}
		else if (result > 0)
		{
			break;
		}
		i++;
	}

	return (sign * result);
}
