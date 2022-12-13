#include <stdio.h>
/**
 * main - Entry-point
 *
 * Return: Always o
 */
int main(void)
{
	int num, sum;

	sum = 0;
	num = 0;

	while (num < 1024)
	{
		if ((num % 3 == 0) || (num % 5 == 0))
		{
			sum += num;
		}
		num++;
	}
	printf("%d\n", sum);

	return (0);
}
