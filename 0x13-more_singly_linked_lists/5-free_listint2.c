#include "lists.h"

/**
 * free_listint2 - free the linked list
 * @head: pointer to list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *liberador;

	if (head)
		return;

	while (*head != NULL)
	{
		liberador = *head;
		*head = (*head)->next;
		free(liberador);
	}
}
