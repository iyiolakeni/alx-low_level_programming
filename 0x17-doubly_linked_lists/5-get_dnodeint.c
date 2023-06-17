#include "lists.h"
/**
 * get_dnodeint_at_index - inserts node at index
 * @head: head address of linked list
 * @index: index of list to go
 * Return: address of new node inserted or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int dex = 0;

	temp = head;
	if (head == NULL)
		return (NULL);
	while (temp != NULL && dex != index)
	{
		dex++;
		temp = temp->next;
	}
	if (index == dex)
		return (temp);
	else
		return (NULL);
}
