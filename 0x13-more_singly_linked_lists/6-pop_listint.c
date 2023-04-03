#include "lists.h"

/**
 * pop_listint - function to delete head node of listint_t list
 * @head: head node double pointer
 *
 * Return: Head node data or o if empty
*/
int pop_listint(listint_t **head)
{
	listint_t *mem;
	int n;

	if (head != NULL || *head != NULL)
	{
		mem = *head;
		*head = (*head)->next;
		n = mem->n;
		free(mem);

		return (n);
	}
	return (0);
}
