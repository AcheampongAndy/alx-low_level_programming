#include "lists.h"
/**
* sum_listint -sum of all the data (n) of a listint_t linked list
* @head: the head of the linked list
* Return: the sum of all the data (n)
*/
int sum_listint(listint_t *head)
{
	listint_t *num;
	int x;

	num = head;
	x = 0;

	if (head == NULL)
		return (0);

	while (num != NULL)
	{
		x += num->n;
		num = num->next;
	}
	return (x);
}
