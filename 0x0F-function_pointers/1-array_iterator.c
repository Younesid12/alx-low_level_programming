#include "function_pointers.h"
/**
 * array_iterator - executes a function on each element of an array
 * @array: array to be stored 
 * @size: size of the arrays
 * @action: function pointer
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int b = 0;
	while (b < size)
	{
		(*action)(array[b]);
		b++;
	}
}
