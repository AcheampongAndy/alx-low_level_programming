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
	while (num < 10)
	{
		printf("%d", num);
		num = num + 1;
	}
	/*10 is the numeric value of the newline character in ASCII*/
	putchar(10);

	return (0);
}
