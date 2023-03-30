#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - print all elements of linked list
 * @h: head of list
 * Return: Elements
 */
size_t print_list(const list_t *h)
{
	int i = 0; /*Iterative Counter*/

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
