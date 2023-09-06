#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars,initializes it with a charcter
 * @size: the size of the array to be created
 * @c: the character with which to initialize each element of the arry
 * Return: a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	int i = 0;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = malloc(size * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		while (i <= size)
		{
			ptr[i++] = c;
		}
	}
	return (ptr);
}
