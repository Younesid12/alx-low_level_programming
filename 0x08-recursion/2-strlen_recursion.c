#include "main.h"
/**
 * int _strlen_recursion - returns the length of a string
 * @s: a pointer to a string
 * Return: integer
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		length = 1 + _strlen_recursion(s + 1);
		_putchar(*s);
	}
	return (length);
}
