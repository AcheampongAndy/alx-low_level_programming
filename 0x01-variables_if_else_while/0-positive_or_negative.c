#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry-point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* Declaration of n */
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		/*print is positive to screen if n is greater than zero */
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		/*print is zero to screen if n is equal to zero */
		printf("%d is zero\n", n);
	}
	else
	{
		/*print is negative to screen if n is less than zero */
		printf("%d is negative\n", n);
	}

	return (0);
}


