#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * main - performs simple operations (calculator)
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (Always)
 */
int main(int argc, char *argv[])
{

if (argc != 4)
{
printf("Error\n");
exit(98);
}

if (
(strcmp(argv[2], "+") &&
strcmp(argv[2], "-") &&
strcmp(argv[2], "*") &&
strcmp(argv[2], "/") &&
strcmp(argv[2], "%"))
)
{
printf("Error\n");
exit(99);
}

if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0)
&& atoi(argv[3]) == 0)
{
printf("Error\n");
exit(100);
}

printf("%d\n", (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3])));

return (0);
}
