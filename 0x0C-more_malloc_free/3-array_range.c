#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: starting int
 * @max: max int
 * Return: array of integers
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i = 0;
	int size = 0;
	int c = min;

		if (min > max)
		{
			return (NULL);
		}
	size = max - min + 1;
	ptr = malloc(size * sizeof(int));
		if (ptr == 0)
		{
			return (NULL);
		}
		for (min = c; min <= max; min++)
		{
			m[i] = min;
			i++;
		}
		return (ptr);
}
