#include "main.h"

/**
 * print_alphabet_x10 - print ten times
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int any, alx;

	for (any = 0; any <= 9; any++)
	{
		for (alx = 'a'; alx <= 'z'; alx++)
		{
			_putchar(alx);
		}
	}
	_putchar(10);
}
