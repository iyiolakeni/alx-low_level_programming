#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * list_len - function to return number of elements
 * @h: list head
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}

	return (i);
}
