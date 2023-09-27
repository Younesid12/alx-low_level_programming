#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
/**
 * free_list - frees the memory allocated
 * @head: a pointer to the memory to free
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *current = head;
	list_t *next;

		while (current != NULL)
		{
			next = current->next;
			if (current->str != NULL)
				free(current->str);
			free(current);
			current = next;
		}
}
