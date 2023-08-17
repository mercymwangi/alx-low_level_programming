#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of a linked list
 * @head: ptr to head of thenode
 * @index: idx of the node to be searched for, beginning from 0
 * Return: the nth node or null
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int s;
	dlistint_t *temp;

	s = 0;
	if (head == NULL)
	return (NULL);

	temp = head;
	while (temp)
	{
		if (index == s)
			return (temp);
		s++;
		temp = temp->next;
	}
	return (NULL);
}
