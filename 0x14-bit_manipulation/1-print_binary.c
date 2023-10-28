#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: number to be converted to its binary
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int num1;
	int i;
	int num = 0;

	for (i = 63; i >= 0; i--)
	{
		num1 = n >> i;

		if (num1 & 1)
		{
			_putchar('1');
			num++;
		}
		else if (num)
		{
			_putchar('0');
		}
	}
	if (num == 0)
		_putchar('0');
}
