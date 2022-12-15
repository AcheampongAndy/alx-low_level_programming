#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: void
 */
void more_numbers(void)
{
	int count, rep, num, lim;

	lim = 9;
	for (count = 0; count < 10; count++)
	{
		lim = 9;
		rep = 0;
		while (rep <= 1)
		{
			num = 0;
			while (num <= lim)
			{
				if (lim == 4)
				{
					_putchar(1 + '0');
				}
				_putchar(num + '0');
				num++;
			}
			lim = 4;
			rep++;
		}
		_putchar('\n');
	}
}
