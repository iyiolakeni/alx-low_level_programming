#include "lists.h"

/**
 * free_listint - function to free listint_t list
 * @head: head of node
*/
void free_listint(listint_t *head)
{
	listint_t *mem;

	while (head != NULL)
	{
		mem = head;
		head = mem->next;
		free(mem);
	}

}
