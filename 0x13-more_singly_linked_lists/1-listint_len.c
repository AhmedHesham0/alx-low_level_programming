#include "lists.h"
/**
 * listint_len - returns all the number of all the elements in the linked list
 *
 * Return: all the number of nodes in the list
 * @h:  type of linked list listint_t to traverse
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

