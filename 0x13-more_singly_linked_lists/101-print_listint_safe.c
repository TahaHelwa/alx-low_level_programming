#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head, *safeguard[1024];
	size_t count = 0, i = 0;

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;

		/* Check if current node points to a node already printed */
		for (i = 0; i < count; i++)
		{
			if (current->next == safeguard[i])
			{
				printf("-> [%p] %d\n", (void *)current->next, current->next->n);
				return (count);
			}
		}

		/* Add current node to safeguard array */
		safeguard[count - 1] = current;
		current = current->next;
	}

	return (count);
}
