#include <stdio.h>
/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: integer that is gonna be raised to the power of y
 * @y: integer
 *Return: integer
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
