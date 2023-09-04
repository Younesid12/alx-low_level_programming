#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
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

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (b = 1; argc > b; b++)
		{
			if (atoi(argv[b]) >= '0' && atoi(argv[b]) <= '9')
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum = sum + atoi(argv[b]);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
