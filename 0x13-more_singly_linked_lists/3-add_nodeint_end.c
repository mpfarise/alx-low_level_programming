#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of the linked list
 * @head: pointerto the first element in the list
 * @n: data to inserit in the new element
 *
 * Return: pointer to the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;

	listint_t *temp = *head;

	new_node = malloc(sizeof(listint_t));

	if (!new_node)

		return (new_node);

	new_node->n = n;

	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;

		return (new_node);
	}

	while (temp->next)
		temp->next = new_node;

	return (new_node);
}
