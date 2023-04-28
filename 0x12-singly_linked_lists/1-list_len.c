#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * list_len- returns number of elements in linked list_t
 * @h: pointer to the list_t list
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t l = 0;

	while (h)
	{
		l++;
		h = h->next;
	}
	return (l);
}
