#include <stdio.h>
/**
 * main - prints program name followed by a new line
 * @argc: the number of the command line arguments
 * @argv: a pointer to a string
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("/.%s\n", argv[0]);
	return (0);
}
