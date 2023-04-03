#include "lists.h"

/**
 * insert_nodeint_at_index - function to insert node at nth position
 * @head: Head node double pointer
 * @idx: index of nth node
 * @n: integer to store nth node
 * Return: node or Null if failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *nth_node, *node = *head;
	unsigned int i = 0;

	/* Create New Node */
	nth_node = malloc(sizeof(listint_t));
	if (nth_node == NULL)
		return (NULL);

	nth_node->n = n;
	/*Insert new node at nth index */
	if (idx == 0)
	{
		nth_node->next = *head;
		*head = nth_node;
	}
	else
	{
		while (i < idx - 1)
		{
			if (node == NULL)
			{
				/*if the list is not enough*/
				free(nth_node);
				return (NULL);
			}
			node = node->next;
			i++;
		}

		if (node == NULL)
		{
			free(nth_node);
			return (NULL);
		}

		nth_node->next = node->next;
		node->next = nth_node;
	}
	return (nth_node);
}
