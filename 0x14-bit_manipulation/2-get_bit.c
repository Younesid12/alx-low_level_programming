#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number to be converted to its binary
 * @index: index
 * Return: value of the bit at index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int i;
	i = sizeof(unsigned long int) * 8;

	if (index >= i)
	{
		return (-1);
	}

	return ((n >> index) & 1);
}
