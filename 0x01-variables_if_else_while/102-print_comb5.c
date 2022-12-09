#include <stdio.h>
/**
 * main - Entry-point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num, num1, num2, num3;

	num = 0;
	while (num < 10)
	{
		num1 = 0;
		while (num1 < 10)
		{
			num2 = num1 + 1;
			num3 = num;
			while (num2 < 10)
			{
				while (num3 < 10)
				{
					putchar(num + '0');
					putchar(num1 + '0');
					putchar(32);
					putchar(num2 + '0');
					putchar(num3 + '0');
					if (num < 9 || num1 < 8 || num2 < 7 || num3 < 7)
					{
						putchar(44);
						putchar(32);
					}
					num3++;
				}
				num3 = 0;
				num2++;
			}
			num1++;
		}
		num++;
	}
	putchar(10);
	return (0);
}

