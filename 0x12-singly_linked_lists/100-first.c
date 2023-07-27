void foo(void) __attribute__ ((constructor));

/**
 * foo - function that prints a string before main func.
 */
void foo(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("nI bore my house upon my back!\n");
}
