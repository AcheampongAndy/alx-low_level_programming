#include <stdio.h>
#include <stdlib.h>
/**
* main -  program that multiplies two numbers
* @argc: the length of the array
* @argv: the array
* Return: 0
*/
int main(int argc, char **argv)
{
	int i, Total;

	Total = 1;
	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			Total *= atoi(*(argv + i));
		}
		printf("%d\n", Total);
	}
	return (0);
}
