#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data of a dlistint_t linked list
 * @head: pointer to the head node of the linked list
 * Return: the sum of all the data (n), 0 if empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;
	int sum;

	sum = 0;
	ptr = head;
	if (!head)
	{
		return (0);
	}
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
