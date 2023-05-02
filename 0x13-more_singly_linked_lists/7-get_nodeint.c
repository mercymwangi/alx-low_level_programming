#include "lists.h"
#include <stdio.h>

/**
 * get_nodeint_at_index - returns the nth node of listint_t list
 * @head: first node in the listint_t
 * @index: index of the node to return
 * Return: pointer to the node, NULL if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j = 0;
	listint_t *temp = head;

	while (temp && j < index)
	{
		temp = temp->next;
		j++;
	}
	return (temp ? temp : NULL);
}
