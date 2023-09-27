#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
/**
 * *add_node_end - adds a new node at the end of a list_t list
 * @head: a pointer to pointer to the first node of the linked list
 * @str: sting to be duplicated
 * Return: the address of the first element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr = *head;
	list_t *current = malloc(sizeof(list_t));
		if (current == NULL)
		{
			return (NULL);
		}
	current->str = strdup(str);
		if (current->str == NULL)
		{
			free(current);
			return (NULL);
		}
	current->len = strlen(str);
	current->next = NULL;
		if (*head == NULL)
		{
			*head = current;
		}
		else
		{
			while (ptr->next != NULL)
			{
				ptr = ptr->next;
			}
			ptr->next = current;
		}
		return (*head);
}
