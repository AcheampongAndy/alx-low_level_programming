#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked list
 * @head: head of linked list
 * Return: node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *next, *old;

	old = NULL;
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = old;
		old = *head;
		*head = next;
	}
	*head = old;
	return (*head);

}
