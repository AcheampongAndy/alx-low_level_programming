#include "main.h"
/**
 * print_triangle - print the triangle
 * @size: the size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int lenght, widht, dot, count;

	if (size > 0)
	{
		count = 0;
		lenght = 0;
		while (lenght < size)
		{
			dot = size - 1;
			widht = -1;
			while (dot > count)
			{
				_putchar(' ');
				dot = dot - 1;
			}
			while (widht < lenght)
			{
				_putchar('#');
				widht = widht + 1;
			}
			count = lenght + 1;
			lenght = lenght + 1;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
