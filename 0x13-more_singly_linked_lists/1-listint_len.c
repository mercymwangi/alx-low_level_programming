#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returns the number of element of listint_t lists
 * @h: traverse linked list of type listint_t
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
