#include "lists.h"

/**
 * get_nodeint_at_index - fucntion to return the nth node
 * @head: node head
 * @index: nth integer
 * Return: nth node or Null
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *nth = head;
	unsigned int i = 0;

	while (i < index && nth != NULL)
	{
		nth = nth->next;
		i++;
	}

	if (i == index)
		return (nth);
	else
		return (NULL);
}
