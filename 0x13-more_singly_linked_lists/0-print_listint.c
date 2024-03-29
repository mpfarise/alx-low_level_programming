#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type of listint to print
 *
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);

		h = h->next;

		count++;
	}

	return (count);

}
