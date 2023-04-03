#include "lists.h"

/**
 * sum_listint - function to return sum of all data in listint_t
 * @head: head node and struct
 * Return: return sum of all nodes
*/
int sum_listint(listint_t *head)
{
	int sum = 0; /* counter to hold sum */

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
