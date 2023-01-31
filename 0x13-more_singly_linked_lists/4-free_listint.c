#include "lists.h"
/**
 * free_listint - frees a listint_t list
 * @head: head of linked list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *new;

	new = head;
	while (new != NULL)
	{
		new = new->next;
		free(head);
		head = new;
	}
}
