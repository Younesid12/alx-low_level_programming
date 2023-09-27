#include "lists.h"
#include <string.h>
#include <stddef.h>
#include <stdlib.h>
/**
 * _strlen - returns the length of a string
 * @str: pointer to a string to be counted
 * Return: the length
 */
int _strlen(const char *str)
{
	int length = 0;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		length++;
	}
}
/**
 * *add_node - adds a new node at the beginning of a list_t list
 * @head: a pointer to pointer to the head of the linked list
 * @str: pointer to a string to be added
 * Return: the address of the new element or NULL of failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;

	if (!head)
	{
		return (0);
	}
	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
	{
		return(NULL);
	}

	ptr->str = strdup(str);

	if (ptr->str == NULL)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		ptr->len = _strlen(str);
		ptr->next = *head;
		*head = ptr;
	}
	return (ptr);
}
