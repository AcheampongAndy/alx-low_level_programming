#include "main.h"
/**
 * _calloc - allocates memory for an array.
 * @nmemb: number of elements.
 * @size: size of bytes.
 *
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	unsigned int x, len;

	if (nmemb == 0 || size == 0)
		return (NULL);

	len = nmemb * size;
	s = malloc(len);

	if (s == NULL)
		return (NULL);

	for (x = 0; x < len; x++)
		*(s + x) = 0;

	return (s);
}
