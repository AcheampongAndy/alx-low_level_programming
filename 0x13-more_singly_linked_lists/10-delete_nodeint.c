#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index of a linked list
 * @head: head of linked list
 * @index: index to delete
 * Return: success 1, failure -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int x;
	listint_t *new;
	listint_t *old;

	if (head == NULL || *head == NULL)
		return (-1);
	new = *head;
	old = *head;
	if (index == 0)
	{
		*head = new->next;
		free(new);
		return (1);
	}
	x = 0;
	while (new->next != NULL)
	{
		if (x == index)
		{
			old->next = new->next;
			free(new);
			return (1);
		}
		old = new;
		new = new->next;
		x++;
	}
	if (x == index)
	{
		old->next = NULL;
		free(new);
		return (1);
	}
	return (-1);
}
