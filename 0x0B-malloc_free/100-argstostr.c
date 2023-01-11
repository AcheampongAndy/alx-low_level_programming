#include "main.h"
/**
 * _len - gets string length
 * @s: string
 * Return: length (int)
 */

int _len(char *s)
{
	int l;

	for (l = 0; s[l] != '\0'; l++)
		;

	return (l);
}
/**
 * argstostr - concatenates all the arguments
 * @ac: argc - number of arguments
 * @av: argv - array of arguments
 * Return: pointe to new string
 */

char *argstostr(int ac, char **av)
{
	int l, x, y, k;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	l = 0;
	for (x = 0; x < ac; x++)
		l += _len(av[x]) + 1;

	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);

	k = 0;
	for (x = 0; x < ac; x++)
	{
		for (y = 0; y < _len(av[x]); y++)
		{
			str[k] = av[x][y];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';
	return (str);
}
