#include "lists.h"

/**
 * reverse_listint - function to reverse listint_t list
 * @head: head node double pointer
 * Return: reverse list
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *old = NULL;
	listint_t *node = *head;

	while (node != NULL)
	{
		listint_t *next = node->next;
		node->next = old;
		old = node;
		node = next;
	}

	*head = old;
	return (old);
}
