#include "lists.h"

/**
 * print_listint_safe - function to print listint_t list
 * @head: head node double pointer
 * Return: printed list or 98
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;
	const listint_t *slow = head;
	const listint_t *fast = head;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		printf("[%p] %d\n", (void *) slow, slow->n);
		i++;

		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			printf("[%p] %d\n", (void *) slow, slow->n);
			i++;
			printf("-> [%p] %d\n", (void *) fast->next, fast->next->n);
			i++;
			break;
		}
	}

	while (slow != NULL)
	{
		printf("[%p] %d\n", (void *) slow, slow->n);
		i++;
		slow = slow->next;
	}

	if (slow == NULL && fast != NULL)
	{
		exit(98);
	}

	return (i);
}
