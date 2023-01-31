#include "lists.h"
/**
 * free_listint2 - frees a listint_t list
 * @head: head of linked list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *new;

	if (head == NULL)
		return;

	new = *head;
	while (new != NULL)
	{
		new = new->next;
		free(*head);
		*head = new;
	}
	*head = NULL;
}
