#include <stdio.h>

/**
 * main - prints all arguments it recieves
 * @argc: int
 * @argv: list
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
