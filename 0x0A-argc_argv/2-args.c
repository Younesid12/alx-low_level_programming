#include <stdio.h>

/**
 * main - prints the number of arguments passed into the program
 * @argc: int
 * @argv: list
 * Return: 0
 */
int main(int argc, char *argv[])
{
	for (int a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
