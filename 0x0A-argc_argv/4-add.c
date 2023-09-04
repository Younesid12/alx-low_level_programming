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
	int b;

	for (b = 1; argc > b; b++)
	{
		if (*argv[b] < '0' || *argv[b] > '9')
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += atoi(argv[b]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
