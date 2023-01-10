#include "main.h"
/**
* create_array - creates an array of chars
* @size: the size of the array
* @c: the array
* Return: a pointer or NULL
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *s;

	if (size == 0)
	{
		return (NULL);
	}
	s = malloc(size * sizeof(c));
	if (s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		s[i] = c;

	return (s);
}
