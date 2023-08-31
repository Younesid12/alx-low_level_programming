#include "main.h"
/**
 * factorial - returns the factorila of a given factorial
 * @n: integer
 * Return: integer
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
