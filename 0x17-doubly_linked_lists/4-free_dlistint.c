#include "lists.h"

/**
 * free_dlistint - function that frees a linked list.
 * @head: points to head of the node
 * Return: nothing
 **/
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	return;

	while (head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
