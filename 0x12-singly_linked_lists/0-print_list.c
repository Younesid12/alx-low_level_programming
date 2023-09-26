#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stddef.h>
/**
 * print_list - prints all the elements of a list_t list
 * @h: a pointer to the head of the stringly linked list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int i = 0;
	const list_t *ptr;
	unsigned int count = 0;

	if (!h)
	{
		return (0);
	}
	ptr = h;
	while (ptr != NULL)
	{
		if (ptr->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", ptr->len, ptr->str);
			ptr = ptr->next;
		}
		count++;
	}
	return (count);
}
