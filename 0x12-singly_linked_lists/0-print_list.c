#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all elements of list_t list
 * @h: prints pointer to the list_t
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u]%s\n", h->len, h->str);
		h = h->next;
		s++;
	}
	return (s);
}
