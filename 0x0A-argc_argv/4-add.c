#include <stdio.h>
#include <stdlib.h>
/**
* main -  program that  add positive numbers
* @argc: the length of the array
* @argv: the array
* Return: 0
*/
int main(int argc, char **argv)
{
	int i, Total, x, y;

	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y] != '\0'; y++)
		{
			if (argv[x][y] > '9' || argv[x][y] < '0')
			{
			printf("%s\n", "Error");
			return (1);
			}
		}
	}
	Total = 0;
	if (argc < 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			Total += atoi(*(argv + i));
		}
		printf("%d\n", Total);
	}
	return (0);
}
