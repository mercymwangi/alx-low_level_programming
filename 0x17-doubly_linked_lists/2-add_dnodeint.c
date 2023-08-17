#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at the beginning
 * of a linked list
 * @head: the head of the node
 * @n: value to be added
 * Return: the address of the added element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_value;
	dlistint_t *h;

	new_value = malloc(sizeof(dlistint_t));
	if (new_value == NULL)
		return (NULL);

	new_value->n = n;
	new_value->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}

	new_value->next = h;

	if (h != NULL)
		h->prev = new_value;

	*head = new_value;

	return (new_value);
}
