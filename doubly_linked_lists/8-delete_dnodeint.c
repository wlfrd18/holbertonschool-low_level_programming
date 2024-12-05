#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes the node at a given index.
 * @head: double pointer to the head of the list
 * @index: the index of the node to be deleted, starting at 0
 * Return: 1 if successful, -1 if it fails
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i = 0;

	if (current == NULL)
		return (-1);

	if (index == 0)
	{
		*head = current->next;

		if (*head != NULL)
			(*head)->prev = NULL;

		free(current);
		return (1);
	}


	while (current != NULL)
	{
		if (i == index)
		{

			if (current->prev != NULL)
				current->prev->next = current->next;
			if (current->next != NULL)
				current->next->prev = current->prev;

			free(current);
			return (1);
		}

		current = current->next;
		i++;
	}


	return (-1);
}
