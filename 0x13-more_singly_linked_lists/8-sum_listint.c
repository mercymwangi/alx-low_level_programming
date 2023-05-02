#include "lists.h"
#include <stdio.h>

/**
 * sum_listint - calculates the sum of all n in listint_t
 * @head: firts node in listint_t
 * Return: sum (result)
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
