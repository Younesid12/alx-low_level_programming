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
/**
 * find_binary - finds a binary of a number
 * @n: the number to be converted to a its binary representation
 * Return: void
 */
void find_binary(unsigned long int n)
{
	unsigned long int i = 0;
	unsigned long int num = 0;
	unsigned int num1 = 0;

	if (n == 0)
	{
		return;
	}
	else
	{
		if (n < 10000)
		{
			num = 400;
		}
		while (i <= n)
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
			else
			{
				num++;
			}
		}
		num1 = n - (num * 2);
		n = num;
		find_binary(n);
		_putchar(num1 + '0');
	}
}
