#include "lists.h"

/**
 * strlen - returns length of string
 * @s: string
 * Return: length of string
 */

int _strlen(const char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * add_node - adds a new node at the beginning of  list_t list
 * @head: head of linked list
 * @str: string to be used as data for node
 * Return: number of elements
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *string;
	char *x;
	int y;

	string = malloc(sizeof(list_t));
	if (string == NULL)
		return (NULL);
	if (str == NULL)
	{
		return (NULL);
		y = 0;
	}
	else
	{
		x = strdup(str);
		y = _strlen(str);
	}
	string->str = x;
	string->len = y;
	string->next = *head;
	*head = string;

	return (*head);
}
