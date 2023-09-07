#include "main.h"
#include <stdlib.h>
int **alloc(int width, int height)
{
	int **ptr;
	int i = 0;
	int j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(*ptr) * height);
	if (ptr == 0)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(**ptr) * width);
	}
	if (ptr[i] == 0)
	{
		while (i--)
			free(ptr[i]);
		free(ptr);
		return (NULL);
	}

	for (j = 0; j < width; j++)
	{
		ptr[i][j] = 0;
	}
	return (ptr);
}
