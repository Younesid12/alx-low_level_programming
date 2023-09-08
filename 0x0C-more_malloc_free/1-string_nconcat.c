#include "main.h"
#include <stdlib.h>
/**
 * _strlen - calculates the length of a string
 * @s: pointer to a string to be calculated
 * Return: length of the string
 */
int _strlen(char *s)
{
	int length;

	for (length = 0; *s != '\0'; s++)
	{
		length++;
	}
	return (length);
}

/**
 * *string_nconcat - concatenates two strings
 * @s1: a pointer to the first string
 * @s2: a pointer to the second string
 * @n: The maximum number of characters from s2 to concatenate.
 * Return: a pointer to the newly allocated concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	char *str;
	int i;
	int j;
	unsigned int size1;
	unsigned int size2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	size1 = _strlen(s1);
	size2 = _strlen(s2);
	str = malloc(sizeof(char) * (size1 + n) + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		str[i] = s2[j];
		i++;
	}

	str[i] = '\0';
	return (str);
}
