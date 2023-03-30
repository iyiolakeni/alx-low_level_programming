#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - adds node at end
 * @head: head node
 * @str: string to add
 * Return: address
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;
	list_t *mem, *new;

	while (str[i])
		i++;

	mem = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	mem->str = strdup(str); /*Duplicate str*/
	mem->len = i;
	mem->next = NULL;
	if (strdup(str) == NULL)
	{
		free(mem);
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = mem;
		return (mem);
	}
	else
	{
		new = *head;
		while (new->next != NULL)
			new = new->next;
		new->next = mem;
		return (mem);
	}
}
