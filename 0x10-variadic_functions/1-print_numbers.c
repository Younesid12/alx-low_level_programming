#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers followed by a new line
 * @separator: the string to be printed between numbers
 * @n: number of arguments
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list(args);

	unsigned int i;
	char result;

	va_start(args, n);
	if (*separator == '\0')
	{
		for (i = 0; i < n; i++)
		{
			result = va_arg(args, const unsigned int);
			printf("%d", result);
		}
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			result = va_arg(args, const unsigned int);
				printf("%d,%s", result, separator);
		}
	}
	_putchar('\0');
	va_end(args);
}

