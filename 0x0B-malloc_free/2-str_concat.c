#include "main.h"
/**
 * *str_concat - concatenates two strings
 * @s1: holds the first string
 * @s2: holds the second string
 * Return: pointer to a new allocated space in memory, 0 if Null
 */
char *str_concat(char *s1, char *s2)
{
	int size = 0;
	int i = 0;
	char *str;
	int b = 0;
	int c = 0;
	int f = 0;

	if (s1 == 0 && s2 == 0)
	{
		return (0);
	}

	for (; s1[i] != '\0'; i++)
	;

	for (; s2[b] != '\0'; b++)
	;

	c = i + b;

	str = malloc(c + 1 * sizeof(char));

	if (str == 0)
	{
		return (0);
	}
	else
	{
		for (; size <= i; size++)
		str[size] = s1[size];

		for (; f <= b; f++)
		str[size++] = s1[f];
		str[size] = '\0';
	}
	return (str);
}
