#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for Holberton School students.
 * @argc:  count.
 * @argv:  vector.
 *
 * Return:  0.
 */
int main(int argc, char *argv[])
{
	char *opc = (char *) main;
	int x, n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	n = atoi(argv[1]);

	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (x = 0; x < n; x++)
	{
		printf("%02x", opc[x] & 0xFF);
		if (x != n - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
