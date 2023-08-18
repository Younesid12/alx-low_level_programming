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

	str = malloc((c + 1) * sizeof(char));

	if (str == 0)
	{
		return (0);
	}
	else
	{
		int l = 0;

		for (; l <= i; l++)
		str[l] = s1[l];

		for (; f <= b; f++)
		str[l++] = s2[f];
		str[l] = '\0';
	}
	return (str);
}
