#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 *
 * Return: void
 */
void jack_bauer(void)
{
	int hour1, hour2, min1, min2;

	hour1 = 0;
	while (hour1 < 3)
	{
		if (hour1 != 2)
		{
		hour2 = 0;
		while (hour2 < 10)
		{
			min1 = 0;
			while (min1 < 6)
			{
				min2 = 0;
				while (min2 < 10)
				{
					_putchar(hour1 + '0');
					_putchar(hour2 + '0');
					_putchar(':');
					_putchar(min1 + '0');
					_putchar(min2 + '0');
					_putchar('\n');
					min2++;
				}
				min1++;
			}
			hour2++;
		}
		hour1++;
		}
		else
		{
			hour2 = 0;
			while (hour2 < 4)
			{
				min1 = 0;
				while (min1 < 6)
				{
					min2 = 0;
					while (min2 < 10)
					{
						_putchar(hour1 + '0');
						_putchar(hour2 + '0');
						_putchar(':');
						_putchar(min1 + '0');
						_putchar(min2 + '0');
						_putchar('\n');
						min2++;
					}
					min1++;
				}
				hour2++;
			}
			hour1++;
		}
	}
}
