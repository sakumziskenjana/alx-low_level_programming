#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the
 * end of a listint_t list
 * @head: a pointer to the address of the
 * head of the listint_t list
 * @n: the integer for the new node to contain
 *
 * Return: If the function fails - NULL
 * Otherwise - the address of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *endnode;
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	endnode = *head;

	while (endnode->next != NULL)
		endnode = endnode->next;
	endnode->next = newnode;

	return (newnode);
}
