#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: the head of the linked list
 * @n: the data to be used for the new node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ptr;

	ptr = malloc(sizeof(dlistint_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->prev = NULL;
	ptr->n = n;
	ptr->next = *head;
	(*head)->prev = ptr;
	*head = ptr;
	return (ptr);
}
