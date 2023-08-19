#include "main.h"
/**
 * _strlen - calculates the length of a string
 * @s: string
 * Return: int
 */
int _strlen(char *s)
{
	int size = 0;

	for (; s[size] != '\0'; size++)
	{
		return (size);
	}
}
/**
 * *str_concat - concatenates a string
 * @s1: string
 * @s2: string
 * Return: pointer to a newly allocated memory, Null if failed
 */
char *str_concat(char *s1, char *s2)
{
	int size1;
	int size2;
	int n = 0;
	int b = 0;
	char *str;

	if (s1 == 0 && s2 == 0)
	{
		return (0);
	}
	size1 = _strlen(s1);
	size2 = _strlen(s2);


	str = malloc((size1 + size2) * sizeof(char) + 1);
	if (str == 0)
	{
		return (0);
	}
	else
	{
		for (; b < size1; b++)
		str[b] = s1[b];

		for (; n < size2; n++)
			str[b++] = s2[n];
		str[b] = '\0';
		return (str);
	}
}
