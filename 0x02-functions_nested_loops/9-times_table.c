#include "main.h"
/**
 * times_table - prints the 9 times table
 *
 * Return: void
 */
void times_table(void)
{
	int n, m, ans, first_num, second_num;

	n = 0;
	while (n < 10)
	{
		m = 0;
		while (m < 10)
		{
			ans = n * m;
			if (m == 0)
			{
				_putchar('0');
			}
			else if (ans < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(ans + '0');
			}
			else
			{
				_putchar(',');
				first_num = ans / 10;
				second_num = ans % 10;
				_putchar(' ');
				_putchar(first_num + '0');
				_putchar(second_num + '0');
			}
			m++;
		}
		_putchar('\n');
		n++;
	}
}
