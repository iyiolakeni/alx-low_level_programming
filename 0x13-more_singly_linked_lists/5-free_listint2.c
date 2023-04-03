#include "lists.h"

/**
 * free_listint2 - free list and set head to NULL
 * @head: head node
*/
void free_listint2(listint_t **head)
{
	listint_t *mem;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		mem = *head;
		*head = mem->next;
		free(mem);
	}

	*head = NULL;
}
