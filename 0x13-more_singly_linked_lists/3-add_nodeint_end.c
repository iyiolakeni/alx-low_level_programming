#include "lists.h"

/**
 * add_nodeint_end - function to add to the end of the list
 * @head: head of node
 * @n: value of next node
 * Return: return new node at the end of list
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *mem, *temp;

	mem = malloc(sizeof(listint_t));
	if (mem == NULL)
		return (NULL);
	mem->n = n;
	mem->next = NULL;
	if (*head == NULL)
	{
		*head = mem;
		return (mem);
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = mem;
		return (mem);
	}
}
