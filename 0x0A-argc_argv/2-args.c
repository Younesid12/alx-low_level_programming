#include <stdio.h>
/**
 * main - prints all arguments it receives
 * @argc: int
 * @argv: list
 * Return: (0)
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s", argv[0] + 1);
	return (0);
}
