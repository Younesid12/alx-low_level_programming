#include "main.h"
#include <stdlib.h>
/**
 * *argstostr - concatenates all arguments
 * @ac: number of arguments
 * @av: pointer to pointer to strings that are arguments passed
 * Return: pointer to a string
 */
char *argstostr(int ac, char **av)
{
	int i;
	int j;
	int size = 0;
	int a = 0;
	char *result;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			size++;
		}
	}

	result = malloc(sizeof(char) * (size + 1));
	if (result == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			result[a] = av[i][j];
			a++;
		}
		result[a++] = '\n';
	}
	result[a] = '\0';

	return (result);
}
