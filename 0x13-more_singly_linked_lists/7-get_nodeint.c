#include "lists.h"

/**
 *  get_nodeint_at_index - returns node at specific index in the linked list
 *  @index: indexing for the node to return
 *  @head: the first node in the linked list
 *  Return: pointering the node we're looking for or 0
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}

