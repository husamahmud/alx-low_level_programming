#include <stdio.h>

/**
 * foo - function that prints a string before main func.
 */
__attribute__((constructor))
void foo(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("nI bore my house upon my back!\n");
}
