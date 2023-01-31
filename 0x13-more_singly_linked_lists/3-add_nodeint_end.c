#include "lists.h"
/**
* add_nodeint_end - adds a new node at the end of a listint_t list
* @head: head of the link list
* @n: number
*  Return: the address of the new element, or NULL if it failed
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *num, *end;

	num = malloc(sizeof(listint_t));

	if (num == NULL)
		return (NULL);

	num->n = n;
	num->next = NULL;

	if (*head == NULL)
	{
		*head = num;
		return (num);
	}
	end = *head;
	while(end->next != NULL)
	{
		end = end->next;
	}
	end->next = num;

	return (end);
}
