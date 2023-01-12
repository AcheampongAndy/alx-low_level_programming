#include "main.h"
/**
 * _realloc - reallocates a memory block.
 * @ptr: pointer
 * @old_size: space of ptr.
 * @new_size: new size
 * Return: ptr
 */
vioid *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		ptr = malloc(new_size);

	if (old_size == new_size)
		return (ptr);

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
