#include <stdio.h>
/**
 * main - prints the number of values passed into it followed by a new line
 * @argc: number of arguments
 * @argv: pointer to a character
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)*argv;
	printf("%d\n", argc - 1);
	return (0);
}
