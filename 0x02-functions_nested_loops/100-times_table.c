#include "main.h"
/**
 * print_times_table - print time table
 * @n: number involve
 *
 * Return: void
 */
void print_times_table(int n)
{
	int q, r, ans, fir_num, sec_num;
	if (n >= 0 && n <= 15)
	{
		q = 0;

		while (q <= n)
		{
			r = 0;
			while (r <= n)
			{
				ans = q * r;
				if (r == 0)
				{
					_putchar('0');
				}
				else if (ans < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(ans + '0');
				}
				else if (ans < 100)
				{
					fir_num = ans / 10;
					sec_num = ans % 10;
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(fir_num + '0');
					_putchar(sec_num + '0');
				}
				else if (ans < 1000)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(ans / 100 + '0');
					_putchar((ans / 10) % 10 + '0');
					_putchar(ans % 10 + '0');
				}
				r++;
			}
			_putchar('\n');
			q++;
		}
	}
}
