#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: a pointer to the head of the list_t list
 *
 * Return: The number of nodes in the list_t list
 */
size_t print_listint(const listint_t *h)
{
	int nodes = 0;

	if (h != NULL)
	{
		while (h)
		{
			nodes++;
			printf("%i\n", h->n);
			h = h->next;
		}
	}

	return (nodes);
}
