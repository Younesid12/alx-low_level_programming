#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to pointer to the head node of the linked list
 * @n: an integer data for the new node to be added at the end
 * Return: the address of the new elements, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr;
	dlistint_t *new_node;

	ptr = *head;
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
	{
		return (NULL);
	}
	if (!head)
	{
		free(new_node);
		return (NULL);
	}
	else if (!*head)
	{
		new_node->prev = NULL;
		new_node->n = n;
		new_node->next = NULL;
		*head = new_node;
		return (new_node);
	}
	ptr = *head;
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	new_node->prev = ptr;
	new_node->n = n;
	new_node->next = NULL;
	ptr->next = new_node;
	return (new_node);
}
