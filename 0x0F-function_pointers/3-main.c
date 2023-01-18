#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - performs simple operations (calculator)
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (Always)
 */

int main(int argc, char *argv[])
{
	int x, y, r;
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	op = get_op_func(argv[2]);
	if (op == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	x = atoi(argv[1]);
	y = atoi(argv[3]);
	r = op(x, y);

	printf("%d\n", r);

	return (0);
}
