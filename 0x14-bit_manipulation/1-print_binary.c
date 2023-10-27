#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: number to be converted to its binary
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		find_binary(n);
	}
}
void find_binary(unsigned long int n)
{
	unsigned long int i = 0;
	unsigned int num = 0;
	unsigned int num1 = 0;

	if (n == 0)
	{
		return;
	}
	else
	{
		while (i <= 0)
		{
			i = num * 2;
			if (i == n)
			{
				break;
			}
			else if ((num + 1) * 2 > n)
			{
				break;
			}
			num++;
		}
		num1 = n - (num * 2);
		n = num;
		find_binary(n);
		_putchar(num1 + '0');
	}
}
