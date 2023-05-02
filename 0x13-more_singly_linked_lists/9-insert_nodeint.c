#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to pointer to the head of the list
 * @idx: index of the list where the new node should be added, starting at 0
 * @n: data to be stored in the new node
 *
 * Return: address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *node = *head;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (*head == NULL)
	{
		new_node->next = NULL;
		*head = new_node;
		return (new_node);
	}

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	while (node != NULL && i < idx - 1)
	{
		node = node->next;
		i++;
	}

	if (node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = node->next;
	node->next = new_node;

	return (new_node);
}
