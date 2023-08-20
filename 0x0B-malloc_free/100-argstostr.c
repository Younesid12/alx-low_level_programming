#include "main.h"
/**
 * _strlen - calculataes the length of a string
 * @s: pointer to string
 * Return: int
 */
int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
		return (size);
}

/**
 * *argstostr - concatenates all the arguments of your program.
 * @ac: int
 * @av: arguments
 * Return: string
 */
char *argstostr(int ac, char **av)
{
	int i = 0, d = 0, j = 0, b = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (; i < ac; i++, d++)
		b += _strlen(av[i]);

	s = malloc(sizeof(char) * d + 1);
	if (s == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, b++)
			s[b] = av[i][j];

		s[b] = '\n';
		b++;
	}
	s[b] = '\0';
	return (s);
}
