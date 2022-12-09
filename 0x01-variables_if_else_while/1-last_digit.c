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
	/* Declaration of n*/
	int n, remind;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* divide the random number in n by ten and store the reminder in remind*/
	remind = n % 10;
	if (remind > 5)
	{
		/* print the statement if the last digit of n is greater than 5*/
		printf("Last digit of %d is %d and is greater than 5\n", n, remind);
	}
	else if (remind == 0)
	{
		/* print the statement if the last digit of n is 0*/
		printf("Last digit of %d is %d and is 0\n", n, remind);
	}
	else if (remind < 6)
	{
		/* print the statement if the last digit of n is less than 6 and not 0*/
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, remind);
	}

	return (0);
}
