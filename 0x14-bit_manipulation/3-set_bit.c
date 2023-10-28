#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to a number
 * @index: the index of the bit to be set to 1
 * Return: 1 if successful, otherwise -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num;

	num = 1;

	if (index > 63)
	{
		return (-1);
	}
	else
	{
		num <<= index;
		*n = *n | num;
		return (1);
	}
}
