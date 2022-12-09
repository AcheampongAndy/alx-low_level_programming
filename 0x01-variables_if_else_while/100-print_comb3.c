#include <stdio.h>
/**
 * main - Entry-point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num, num1;

	num = 0;
	num1 = num + 1;
	while (num < 9)
	{
		num1 = num + 1;
		while (num1 < 10)
		{
			if (num != num1)
			{
				putchar(num + '0');
				putchar(num1 + '0');
				if (num < 8 || num1 < 9)
				{
					putchar(44);
					putchar(32);
				}
			}
			num1++;
		}
		num++;
	}
	putchar(10);
	return (0);
}
