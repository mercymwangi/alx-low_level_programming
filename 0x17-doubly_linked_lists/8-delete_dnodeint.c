#include "lists.h"

/**
 * delete_dnodeint_at_index - function deletes node at idx of a linked list
 * @head: the head of the node
 * @index: idx of the new node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node1;
	dlistint_t *node2;
	unsigned int j;

	node1 = *head;

	if (node1 != NULL)
		while (node1->prev != NULL)
			node1 = node1->prev;

	j = 0;

	while (node1 != NULL)
	{
		if (j == index)
		{
			if (j == 0)
			{
				*head = node1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				node2->next = node1->next;

				if (node1->next != NULL)
					node1->next->prev = node2;
			}

			free(node1);
			return (1);
		}
		node2 = node1;
		node1 = node1->next;
		j++;
	}

	return (-1);
}
