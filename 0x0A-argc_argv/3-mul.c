#include <stdio.h>
/**
 * main - multiplies two numbers
 * @argc: integer
 * @argv: array of pointers
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int sum;

		sum = atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
