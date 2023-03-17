#include "lists.h"

/**
 * print_dlistint - prints all the elements of a
 * dlistint_t list
 *
 * @head: head of the list
 * Return: the sum of all data
 */
int sum_dlistint(dlistint_t *head)
{
	int num;

	num = 0;
	if (head == NULL)
	return (num);

	while (head->prev != NULL)
		head = head->prev;

	while (head != NULL)
	{
		num += head->n;
		head = head->next;
	}
	return (num);
}
