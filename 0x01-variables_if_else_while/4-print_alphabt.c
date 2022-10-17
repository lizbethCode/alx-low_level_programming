#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int n;

	for (n = 97; n < 123; n++)
	{
		if (n != 'q' && n != 'e')
			putchar(n);
	}
	putchar(10);
	return (0);
}
