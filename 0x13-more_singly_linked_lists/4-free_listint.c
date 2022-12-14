#include "lists.h"
#include <stdio.h>

/**
 * free_listint - frees a listint_t list
 * @head: a pointer to the address of the listint_t lsy to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *liberador;

	while (head != NULL)
	{
		liberador = head;
		head = head->next;
		free(liberador);
	}
}
