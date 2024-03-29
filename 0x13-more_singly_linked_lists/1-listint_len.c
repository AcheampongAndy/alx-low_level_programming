#include "lists.h"
/**
* listint_len - the number of elements in a linked listint_t list.
* @h: head of the link list
* Return: number of elements
*/
size_t listint_len(const listint_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}

