#include "main.h"
/**
 * *create_array - creates an array of chars
 * and initialize it with a specific char
 * @size: size of the array
 * @c: the element to initialize the array with
 * Return: Null if 0, pointer to the array or Null if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *ptr = malloc(size * sizeof(char));

	if (size == 0 || ptr == 0)
	{
		return (0);
	}
	while (size--)
	{
		ptr[size] = c;
	}
	return (ptr);
}
