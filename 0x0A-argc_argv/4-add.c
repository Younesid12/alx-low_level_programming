#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: array of pointers to characters
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	char *str;

	while (--argc)
	{
		for (str = argv[argc]; *str; str++)
		       if (*str < '0' || *str > '9')
				return (printf("Error\n", 1);
			sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);

}
