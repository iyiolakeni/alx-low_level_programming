#include "lists.h"

/**
 * reverse_listint - function to reverse listint_t list
 * @head: head node double pointer
 * Return: reverse list
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *old = NULL;
	listint_t *node;

	while (node != NULL)
	{
		node = head->next;

		head->next = old;
		old = node;
		node = head;
	}

	*head = old;
	return (old);
}
