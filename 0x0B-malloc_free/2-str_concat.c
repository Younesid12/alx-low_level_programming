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
	int a;
	int b;

	if (s1 == 0 || s2 == 0)
	{
		return (0);
	}

	for (; s1[i] != '\0'; i++)
	;

	for (; s2[b] != '\0'; b++)
	;

	int c = a + b;

	str = malloc(i + b * sizeof(char) + 1);

	if (str == 0)
	{
		return (0);
	}
	else
	{
		for (; size < c; size++)
		s1[i] += s2[size++];
		str[i] = s1[i];
	}
	return (str);
}
