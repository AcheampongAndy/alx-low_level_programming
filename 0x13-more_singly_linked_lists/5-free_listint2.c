#include "lists.h"
/**
 * free_listint2 - frees a listint_t list
 * @head: head of linked list
 * Return: void
 */
void free_listint2(listint_t **head);
{
	listint_t *new;

	new = *head;
	if (new == NULL)
		return (NULL);

	while (new != NULL)
	{
		new = new->next;
		free(*head);
		*head = new;
	}
	*head = NULL;
}
