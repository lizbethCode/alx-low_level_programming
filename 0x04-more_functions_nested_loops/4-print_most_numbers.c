#include "main.h"
/**
 * print_most_numbers - Print the numbers from 0 to 9
 * do not print 2 and 4
 * Return: Numbers from 0 to 0, except 2 and 4
 */
void print_most_numbers(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		if (n != 50 && n != 52)
		{
			_putchar(n);
		}
	}

	_putchar(10);
}
