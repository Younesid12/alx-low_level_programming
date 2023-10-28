#include "main.h"
/**
 * flip_bits - returns the number of bits you need to flip
 * @n: the number to be converted
 * @m: integer
 * Return: the number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i;
	unsigned int num;

	i = n ^ m;
	num = 0;

	while (i > 0)
	{
		num += i & 1;
		i >>= 1;
	}
	return (num);
}
