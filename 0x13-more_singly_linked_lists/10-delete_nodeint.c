#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t
 * linked list.
 * @head: pointer to pointer to the head of the list
 * @index: index of the node that should be deleted. Index starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *node, *prev;

	if (*head == NULL)
		return (-1);

	node = *head;

	if (index == 0)
	{
		*head = node->next;
		free(node);
		return (1);
	}

	while (node != NULL && i < index)
	{
		prev = node;
		node = node->next;
		i++;
	}

	if (node == NULL)
		return (-1);

	prev->next = node->next;
	free(node);

	return (1);
}
