#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all its parameters
 *@n: number of arguments
 *Return: integer sum 
 */
int sum_them_all(const unsigned int n, ...)
{
	int i;
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, const unsigned int);
	}

	va_end(list);

	return (sum);
}
