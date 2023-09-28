#include "lists.h"
#include <stdlib.h>
/**
 * *add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to pointer to the first node of the linked list
 * @n: the integer to be added at the final node
 * Return: the address of the new element, or NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr;
	listint_t *str;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->n = n;
	ptr->next = NULL;
	if (*head == NULL)
	{
		*head = ptr;
	}
	else
	{
		str = *head;
		while (str->next != NULL)
		{
			str = str->next;
		}
		str->next = ptr;
	}
	return (*head);
}

