#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings followed by a new line
 * @separator: the string to be printed between the string
 * @n: the number of arguments
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	const char *result;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		result = va_arg(list, const char*);
		if (result == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", result);
		}
		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(list);
}
