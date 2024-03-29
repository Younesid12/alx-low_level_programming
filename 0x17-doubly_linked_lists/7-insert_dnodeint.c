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
	dlistint_t *ptr, *temp, *new_node;
	unsigned int i;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
	{
		return (NULL);
	}
	new_node->prev = NULL;
	new_node->n = n;
	new_node->next = NULL;
	if (!*h)
	{
		*h = new_node;
		return (new_node);
	}
	ptr = *h;
	i = 0;
	if (idx == 0)
	{
		new_node->next = *h;
		(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	while (ptr != NULL)
	{
		if (i == idx - 1)
		{
			temp = ptr;
		}
		if (i == idx)
		{
			temp->next = new_node;
			new_node->prev = temp;
			new_node->next = ptr;
			ptr->prev = new_node;
			return (new_node);
		}
		i++;
		ptr = ptr->next;
	}
	free(new_node);
	return (NULL);
}
