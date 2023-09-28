#include "lists.h"
#include "stdlib.h"
/**
 * *add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer to a pointer to the head of the linked list
 * @n:int to be stored for the node that will be added to the beginning
 * Return: the address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	if (!head)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(listint_t));
	if (!ptr)
	{
		return (NULL);
	}
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	if (!n)
	{
		return (NULL);
	}
	return (*head);
}
