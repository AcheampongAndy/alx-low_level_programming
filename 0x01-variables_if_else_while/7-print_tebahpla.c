#include <stdio.h>
/**
 * main - Entry-point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/*Declaration*/
	int alpha;

	/*The ASCII value of the lowercase alphabet is from 97 to 122.*/
	alpha = 122;
	while (alpha > 96)
	{
		putchar(alpha);
		alpha = alpha - 1;
	}
	/*10 is the numeric value of the newline character in ASCII*/
	putchar(10);

	return (0);
}
