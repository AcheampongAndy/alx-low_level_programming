#include <stdio.h>
/**
 * main - Entry-point
 *
 * Return: 0
 */
int main(void)
{
	long int total, first, second;
	int num;

	total =0;
	first = 1;
	second = 2;
	num = 0;

	while (num < 50)
	{
		total = first + second;
		printf("%li, ", total);
		first = second;
		second = total;
		num++;
	}
	total = first + second;
	printf("%li\n", total);

	return (0);
}
