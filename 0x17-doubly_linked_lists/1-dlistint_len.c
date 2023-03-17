#include "lists.h"

/**
 * print_dlistint - prints all the elements of a
 * dlistint_t list
 *
 * @h: head of the list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int num;

	num = 0;
	if (h == NULL)
		return (num);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		num++;
		h = h->next;
	}
	return (num);
}
