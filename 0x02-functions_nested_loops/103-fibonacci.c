#include <stdio.h>
/**
 * main - Entry-point
 *
 * Return: 0
 */
int main(void)
{
	long int total, first, second, sum_tot;


	total = 0;
	first = 0;
	second = 1;
	sum_tot = 0;

	while (total < 4000000)
	{
		total = first + second;
		if (total % 2 == 0)
		{
			sum_tot += total;
		}
		first = second;
		second = total;
	}
	printf("%li\n", sum_tot);

	return (0);
}
