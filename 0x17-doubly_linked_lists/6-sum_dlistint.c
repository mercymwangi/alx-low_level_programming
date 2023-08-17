#include "lists.h"

/**
 * sum_dlistint - function that returns sum the data in a doubly linked list
 * @head: head of the node
 * Return: sum of all data
 */
int sum_dlistint(dlistint_t *head)
{
	int total_sum;

	total_sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			total_sum += head->n;
			head = head->next;
		}
	}

	return (total_sum);
}
