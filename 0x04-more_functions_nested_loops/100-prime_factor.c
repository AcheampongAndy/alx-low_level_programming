#include <stdio.h>
/**
 * main - Entry-point
 *
 * Return: 0
 */
int main(void)
{
	long int quot, div;

	quot = 612852475143;
	div = 2;

	while (div != quot)
	{
		if (quot % div == 0)
		{
			quot = quot / div;
		}
		else
		{
			div++;
		}
	}
	printf("%li\n", quot);
	return (0);
}
