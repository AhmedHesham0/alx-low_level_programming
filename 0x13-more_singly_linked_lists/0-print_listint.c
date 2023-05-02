#include "lists.h"

/**
 * print_listint - that prints all the elements of the linked list
 * Return: the number of all nodes
 * @h: linked the lists of type listint_t to print it
 */


size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
