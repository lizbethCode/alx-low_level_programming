#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int n, x;

	for (n = 48; n < 58; n++)
		putchar(n);
	for (x = 'a'; x <= 'f'; x++)
		putchar(x);
	putchar(10);
	return (0);
}
