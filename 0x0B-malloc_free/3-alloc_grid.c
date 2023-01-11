#include "main.h"
/**
 * alloc_grid - returns a pointer to a 2D array of integers
 * @width: columns
 * @height: rows
 * Return: pointer to 2D array
 */
int **alloc_grid(int width, int height)
{
	int **g, x;

	if (width <= 0 || height <= 0)
		return (NULL);

	g =  (int **) malloc(height * sizeof(int *));

	if (g == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		*(g + x) = malloc(width * sizeof(int));
		if (*(g + x) == NULL)
		{
			for (; x >= 0; x--)
			{
				free(*(g + x));
			}
			free(g);
			return (NULL);
		}
	}
	return (g);
}
