#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number.
 *@n: intger
 *Return: integer
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (findsquare(n, 0));
	}
}

/**
 * findsquare - returns the root square of a number
 * @n: int to find square root
 * @find: square root
 * Return: square root
 */

int findsquare(int n, int find)
{
	if (find * find == n)
	{
		return (find);
	}
	else if (find * find > n)
	{
		return (-1);
	}
	else
	{
		return (findsquare(n, find + 1));
	}
}
