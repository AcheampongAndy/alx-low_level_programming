#include "main.h"
/**
 * print_square -  prints a square
 * @size: the size of the square
 *
 * Return: void
 */
void print_square(int size)
{
	int length, width;

	if (size > 0)
	{
		length = 0;
		while (length < size)
		{
			width = 0;
			while (width < size)
			{
				_putchar('#');
				width++;
			}
			_putchar('\n');
			length++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
