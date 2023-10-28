#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to the the number to be converted
 * @index: the index of the bit to be set to 0
 * Return: 1 if it worked, or -1 if failed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	i = sizeof(unsigned long int) * 8;

	if (index >= i)
	{
		return (-1);
	}
	else
	{
		*n &= ~(1 << index);
		return (1);
	}
}
