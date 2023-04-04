#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: linked list to all type of listint_t to all traverse
 *
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;

		h = h->next;
	}

	return (count);

}
