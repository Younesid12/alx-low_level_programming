#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to pointer to the head of the linked list
 * @idx: index of the list where the new node should be added, starting from 0
 * @n: the data to  be added to the inserted node
 * Return: the address of the new node, NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr;
	dlistint_t *new_node;
	unsigned int i;

	new_node = malloc(sizeof(dlistint_t));
	if (!h || !new_node)
	{
		free(new_node);
		return (NULL);
	}
	new_node->prev = NULL;
	new_node->n = n;
	new_node->next = NULL;
	if (!*h)
	{
		return (new_node);
	}
	ptr = *h;
	i = 0;
	while (ptr != NULL)
	{
		if (i == idx && i == 0)
		{
			new_node->prev = NULL;
			ptr->prev = new_node;
			new_node->next = ptr;
			*h = new_node;
		}
		else if (i == idx)
		{
			new_node->prev = ptr->prev;
			new_node->next = ptr;
			ptr->prev->next = new_node;
			ptr->prev = new_node;
			
		}
		ptr = ptr->next;
	}
	return (new_node);
}
