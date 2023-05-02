#include "lists.h"
#include <stdio.h>

/**
 * delete_nodeint_at_index - deletes node at index of listint_t
 * @head:pointer to the first element
 * @index: index of node to be deleted
 * Return: 1 (success), or if it fails -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *current = NULL;
	unsigned int j = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (j < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		j++;
	}
	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}
