#include "main.h"
#include <stdlib.h>
/**
 * *string_nconcat - concatenates two strings
 * @s1: a pointer to the first string
 * @s2: a pointer to the second string
 * @n: The maximum number of characters from s2 to concatenate.
 * Return: a pointer to the newly allocated concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i;
	unsigned int j;
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
	for (size1 = 0; s1[size1] != '\0'; size1++)
		;

	for (size2 = 0; s2[size2] != '\0'; size2++)
		;

	str = malloc(size1 + n + 1);
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
