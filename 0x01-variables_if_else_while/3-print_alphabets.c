#include <stdio.h>
/**
 * main - Entry-point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int alpha, ALPHA;

	/*The ASCII value of the lowercase alphabet is from 97 to 122.*/
	alpha = 97;
	while (alpha < 123)
	{
		putchar(alpha);
		alpha = alpha + 1;
	}
	/*The ASCII value of the uppercase alphabet is from 65 to 90.*/
	ALPHA = 65;
	while (ALPHA < 91)
	{
		putchar(ALPHA);
		ALPHA = ALPHA + 1;
	}
	/*10 is the numeric value of the newline character in ASCII*/
	putchar(10);

	return (0);
}
