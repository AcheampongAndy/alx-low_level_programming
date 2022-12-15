#include "main.h"
/**
 * print_line - draws a straight line
 *@n: the value involved
 *
 * Return: void
 */
void print_line(int n)
{
	if (n > 0)
	{
		int p;

		p = 0;
		while (p <= n)
		{
			_putchar('_');
			p++;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
