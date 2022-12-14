#include "main.h"
/**
 * factorial - returns the factorial of a given number
 * @n: number
 * Return: Always 0
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		n = n * factorial(n - 1);
	}
	return (n);
}
