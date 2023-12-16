#include "main.h"
#include <stdio.h>

/**
 * _isupper -  checks for uppercase character
 * @c: checked if uppercase or no
 * Return: Returns 1 if c is uppercase, 0 if not
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
