#include "lists.h"

/**
* @head: the pointer to the first node in the linked list
* @n:  is the data to insert in that new node of the list
* add_nodeint - to add a new node at the beginning of the linked list if needed
* Return: pointering to the new node or NULL(empty) if it fails.
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}


