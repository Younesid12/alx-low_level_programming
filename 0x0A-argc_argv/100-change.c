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
	int coins[] = {25, 10, 5, 2, 1};
	int size = 0;
	int i;
	int coins2;

	if (argc < 2)
	{
		printf("Error");
		return (1);
	}
	value = atoi(argv[1]);
	if (value < 0)
	{
		printf("0\n");
		return (0);
	}

	coins2 = sizeof(coins) / sizeof(coins[0]);

	for (i = 0; i < coins2; i++)
	{
		while (value >= coins[i])
		{
			value -= coins[i];
			size++;
		}
	}
	printf("%d\n", size);
	return (0);
}

