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
	int num = 0;
	int num1 = 0;

	if (n == 0)
	{
		return;
	}
	else
	{
		num = n / 2;
		num1 = n - (num * 2);
		n = num;
		find_binary(n);
		_putchar(num1 + '0');
	}
}
