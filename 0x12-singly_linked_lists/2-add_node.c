#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>
/**
 * add_node - function to add node at the begining of a list
 * @head: head address i think
 * @str: string to put through
 * Return: returns an address of new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *mem;
	int i = 0;

	while (str[i])
		i++;

	mem = malloc(sizeof(list_t));
	if (mem == NULL)
	{
		return (NULL);
	}
	mem->str = strdup(str);
	mem->len = i;
	mem->next = *head;

	*head = mem;

	return (mem);
}
