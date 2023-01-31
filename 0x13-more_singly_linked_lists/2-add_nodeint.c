#include "lists.h"
/**
* add_nodeint - that adds a new node at the beginning
* @head: head of the link list
* @n: number
*  Return: the address of the new element, or NULL if it failed
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *first;

	first = malloc(sizeof(listint_t));
	if (first == NULL)
		return (NULL);
	first->n = n;
	first->next = *head;
	*head = first;

	return (first);
}
