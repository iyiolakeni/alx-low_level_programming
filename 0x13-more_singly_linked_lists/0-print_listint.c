#include "lists.h"
/**
 * print_listint - function to print all elements of list h
 * @h: list size node head
 * Return: elements
*/

size_t print_listint(const listint_t *h)
{
	size_t i = 0; /* A counter to store the elements*/

	while (h != NULL)
	{
		printf("%d\n", h->n); /* Print number of element*/
		i++; /*Increment on counter */
		h = h->next; /* add a new node */
	}
	return (i);
}
