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
			if (isdigit(*(argv[b])))
			{
				sum = sum + atoi(argv[b]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
