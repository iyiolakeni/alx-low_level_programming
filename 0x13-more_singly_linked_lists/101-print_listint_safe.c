#include "listint_t.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint_safe - prints list with addresses
 * @head: pointer to head pointer of linked list
 * Return: number of nodes in list, exit(98) if failed
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow = head;
	const listint_t *fast = head;
	size_t count = 0;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			printf("List contains a loop\n");
			exit(98);
		}

		printf("%d\n", slow->n);
		count++;
	}
	return (count);
}
