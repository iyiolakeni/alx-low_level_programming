#include "lists.h"
/**
 * sum_dlistint - sums up values of linked list
 * @head: head of address to get sum
 * Return: sum value
 */
int sum_dlistint(dlistint_t *head)
{
	const dlistint_t *temp;
	int sum = 0;

	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
