#include "main.h"
/**
 * print_diagonal - draws a diagonal line
 * @n: the number involve
 *
 * Return: void
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int space, count;

		count = 0;
		while (count < n)
		{
			space = 0;
			while (space < count)
			{
				_putchar(' ');
				space++;
			}
			_putchar('\\');
			_putchar('\n');
			count++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
