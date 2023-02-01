#include "lists.h"
/**
* insert_nodeint_at_index - inserts a new node at a given position
* @head: the head of the link list
* @idx: the index of the list where the new node should be added
* @n: int for inserted data
* Return: the address of the new node, or NULL if it failed
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *new, *old;
	unsigned int x, y;

	new = malloc(sizeof(listint_t));
	new->n = n;
	new->next = NULL;
	x = 0;
	node = *head;
	old = *head;

	if (*head == NULL)
		return (NULL);

	for (x = 0; x < (idx - 1); x++)
		old = old->next;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		new->next = old->next;
		old->next = new
	}
	return (new);
}
