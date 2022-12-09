#include <stdio.h>
/**
 * main - Entry-point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num, num1, num2;

	num = 0;
	num1 = num + 1;
	num2 = num1 + 1;
	while (num < 8)
	{
		num1 = num + 1;
		while (num1 < 9)
		{
			num2 = num1 + 1;
			while (num2 < 10)
			{
				if (num != num1 && num != num2 && num1 != num2)
				{
					putchar(num + '0'); /* '0' represent an integer equal to 48 in ASCII*/
					putchar(num1 + '0');/*'0' + num is the same as 48 + num.*/
					putchar(num2 + '0');
					if (num < 7 || num1 < 8 || num2 < 9)
					{
						putchar(44);
						putchar(32);
					}
				}
				num2++;
			}
			num1++;
		}
		num++;
	}
	/*10 is the numeric value of the newline character in ASCII*/
	putchar(10);

	return (0);
}
