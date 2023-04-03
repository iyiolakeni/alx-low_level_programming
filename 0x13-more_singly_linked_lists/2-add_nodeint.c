#include "lists.h"

/**
 * add_nodeint - function to add a new node to the beginning of the list
 * @head: an array and the head node
 * @n: value of the node
 * Return: return new nodes
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *mem;

	mem = malloc(sizeof(listint_t));
	if (mem == NULL)
		return (NULL);

	mem->n = n;
	mem->next = *head;

	*head = mem;

	return (*head);
}
