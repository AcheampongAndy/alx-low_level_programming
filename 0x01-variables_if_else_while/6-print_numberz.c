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

	/*The ASCII value of the numeric numbers 0 to 9  is from 48 to 57.*/
	num = 48;
	while (num < 58)
	{
		putchar(num);
		num = num + 1;
	}
	/*10 is the numeric value of the newline character in ASCII*/
	putchar(10);

	return (0);
}
