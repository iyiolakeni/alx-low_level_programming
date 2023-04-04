#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a
 * given position in a linked list
 * @head: pointer to pointer to the first node of the list
 * @index: index of the node to be deleted, starting from 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *nth_node = *head, *pre_node = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(nth_node);
		return (1);
	}
	else
	{
		while (i < index)
		{
			if (nth_node == NULL)
				return (-1);
			pre_node = nth_node;
			nth_node = nth_node->next;
			i++;
		}
		if (nth_node == NULL)
			return (-1);

		pre_node->next = nth_node->next;
		free(nth_node);

		return (1);
	}
}
