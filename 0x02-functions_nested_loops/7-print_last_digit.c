#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @v: check the digit
 *
 * Return: Always 0
 */

int print_last_digit(int v)
{
	int last_digit;

	last_digit = v % 10;

	if (last_digit < 0)

		last_digit *= -1;


	_putchar(last_digit + '0');

	return (last_digit);
}
