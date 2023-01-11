#include "main.h"
/**
* str_concat - concatenates two strings
* @s1: first string
* @s2: second string
* Return: s
*/
char *str_concat(char *s1, char *s2)
{
	int x, y, n, m;

	char *s;

	for (y = 0; *(s1 + y) != '\0'; y++)
		;

	for (x = 0; *(s2 + x) != '\0'; x++)
		;

	s = (char *)malloc((x + y + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);

	for (n = 0; n < y; n++)
		*(s + n) = *(s1 + n);

	for (m = 0; m < x; m++, n++)
		*(s + n) = *(s2 + m);

	*(s + n) = '\0';

	return (s);
}
