#include <unistd.h>
#include "main.h"

/**
 * _putchar - print a character to standard output
 * @c: the character to print
 *
 * Description: writes the character 'c' to standard output
 *
 * Return: On success, returns (1)
 *         On failure, returns (-1)
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
