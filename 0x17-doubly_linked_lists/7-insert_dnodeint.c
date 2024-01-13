#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to pointer to the head of the linked list
 * @idx: the index of the list where the new node should be added, starting from 0
 * @n: the data to  be added to the inserted node 
 * Return: the address of the new node, NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr;
	dlistint_t *temp;
	dlistint_t new_node;
	unsigned int i;
	if (!head == NULL)
	{
		return (NULL)
	}
	new_node->prev = NULL;
	new_node->n = n;
	new_node->next = NULL;
	if (!*head)
	{
		return (new_node);
	}
	i = 0;
	ptr = *head;
	temp = *head;
	while (temp != NULL)
	{
		if (i == idx)
		{
			break;
		}
		i++;
		temp = temp->next;
	}
	i = 0;
	while (ptr != NULL)
	{
		if (i == idx && i == 0)
		{
			new_node->prev = NULL;
			temp->prev = new_node;
			new_node->next = temp;
			*head = temp;
		}
		else if (i == idx)
		{
			new_node->next = temp;
			temp->prev->next = new_node;
			new_node->prev = temp->prev;
		}
		ptr = ptr->next;
	}
	return (new_node);
}
