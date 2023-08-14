#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiply two numbers
 * @argc: int
 * @argc: list
 * Return: 0 return 1 if error
 */
int main(int argc, char *argv[])
{
	int sum;

	if (argc == 3)
	{
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
