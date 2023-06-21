/**
 * positive_or_negative - prints if integer is positive or negative
 * @i: The character to print
 */

void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("0 is zero\n");
}
