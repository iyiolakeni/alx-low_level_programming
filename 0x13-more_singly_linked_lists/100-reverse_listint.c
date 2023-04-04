#include "lists.h"

/**
 * reverse_listint - function to reverse listint_t list
 * @head: head node double pointer
 * Return: reverse list
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *old;
	listint_t *node;

	if (head == NULL || *head == NULL)
		return (NULL);

	old = NULL;
	while (*head != NULL)
	{
		node = (*head)->next;
		(*head)->next = old;
		old = *head;
		*head = node;
	}

	*(head) = old;

	return (*head);
}
