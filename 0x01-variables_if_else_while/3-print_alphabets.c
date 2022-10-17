#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int lower, upper;

	for (lower = 97; lower < 123; lower++)
		putchar(lower);
	for (upper = 65; upper < 91; upper++)
		putchar(upper);
	putchar(10);
	return (0);
}
