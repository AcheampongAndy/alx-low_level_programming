#include "lists.h"
/**
* get_nodeint_at_index - returns the nth node of a listint_t linked list
* @head: the head of the linked list
* @index: the index to iterate
* Return: the nth node of the list
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int x;

	if (head == NULL)
		return (NULL);

	node = head;
	x = 0;
	while (node != NULL)
	{
		if (x == index)
			return (node);
		node = node->next;
		x++;
	}
	return (NULL);
}
