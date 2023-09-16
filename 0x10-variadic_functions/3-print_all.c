#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints everything
 * @format: list of types of arguments passed to the function
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list list;
	int i = 0;
	char *str;

	va_start(list, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(list, int));
				break;
			case 'f':
				printf("%f", va_arg(list, double));
				break;
			case 'i':
				printf("%d", va_arg(list, int));
				break;
			case 's':
				str = va_arg(list, char*);
				if (str == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", str);
				break;
			default:
				break;
		}
		if (format[i + 1] != '\0' &&
				(format[i] == 'c' || format[i] == 'f'
				 || format[i] == 'i' || format[i] == 's'))
		{
		printf(", ");
		}
		i++;
	}
	printf("\n");
	va_end(list);
}
