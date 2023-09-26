#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum of coins to make change for an amount of money
 * @argc: the number of arguments passed
 * @argv: array of pointers to string
 * Return: integer
 */
int main(int argc, char *argv[])
{
	int value;
	int coins = 0;
	int result;

	if (argc <= 2)
		printf("Error");
		return (1);
	value = atoi(argv[1]);
	if (value < 0)
		printf("0\n");
		return (0);
	while (value > 0)
	{
		if (value >= 25)
		{
			value -= 25;
			coins++;
		}
		else if (value >= 10)
			value -= 10;
			coins++;
		if (value >= 5)
		{
			value -= 5;
			coins++;
		}
		else if (value >= 2)
		{
			value -= 2;
			coins++;
		}
		else
		{
			value -= 1;
			coins++;
		}
	}
	printf("%d\n", coins);
	return (0);
}
