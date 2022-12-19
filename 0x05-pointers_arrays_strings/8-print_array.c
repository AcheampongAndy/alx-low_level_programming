#include <stdio.h>
/**
* print_array - print array
* @a: array name
* @n: array size
*
*Return: void
*/
void print_array(int *a, int n)
{
	int num, iterate;

	num = 0;
	iterate = 1;
	if (n < 0)
	{
		n = 0;
	}
	if (n > 0)
	{
		while (a[num] != 0 && iterate < n)
		{
			printf("%d, ", a[num]);
			num++;
			iterate++;
		}
		printf("%d", a[num]);
	}
	printf("\n");
}
