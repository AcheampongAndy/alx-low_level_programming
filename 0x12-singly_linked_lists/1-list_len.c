#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: head of linked list
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t string;

	string = 0;
	while (h != NULL)
	{
		string++;
		h = h->next;
	}
	return (string);
}
