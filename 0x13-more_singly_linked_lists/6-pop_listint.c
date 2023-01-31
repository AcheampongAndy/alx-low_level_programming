#include "lists.h"

/**
 * pop_listint - deletes head node and return node's data
 * @head: head of linked list
 * Return: node data (integer)
 */
int pop_listint(listint_t **head)
{
	listint_t * num;
	int x;

	if (*head == NULL)
		return (x);

	num = *head;
	x = 0;
	*head = num->next;
	x = num->n;
	free(num);
	return (x);
}
