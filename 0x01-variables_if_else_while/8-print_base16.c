#include <stdio.h>
/**
 * main - Entry-point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/*Declaration*/
	int num;

	num = 0;
	while (num < 48)
	{
		if (num < 10)
		{
	/**
	 * '0' represent an integer equal to 48 in ASCII
	 * '0' + num is the same as 48 + num.
	 * When num is 0 the expression evaluate to 48 which is 0
	 */
			putchar('0' + num);
		}
		else if (num > 41)
		{
	/**
	 * 'A' represent an integer equal to 65 in ASCII
	 * num - 10 is the same as 42 -10, which is 32
	 * 32 plus 65 is 97 which is ASCII value of alphabet 'a'
	 */
			putchar(num - 10 + 'A');
		}
		num = num + 1;
	}
	/*10 is the numeric value of the newline character in ASCII*/
	putchar(10);

	return (0);
}
