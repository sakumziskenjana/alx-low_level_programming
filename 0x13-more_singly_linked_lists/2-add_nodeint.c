#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning
 * 		of a listint_t list
 * @head: a pointer to the address of the
 * 		head of the listint_t list
 * @n: the integer for the new node to contain
 *
 * Return: If the function fails - NULL
 * 	Otherwise - the address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	if (head == NULL)
		return (NULL);
	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (*head);
}
