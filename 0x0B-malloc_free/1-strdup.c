#include "main.h"
/**
* _strdup - a pointer to a newly allocated space in memory
* @str: the array
* Return: ar
*/
char *_strdup(char *str)
{
	int x, y, z;

	char *s;

	if (str == NULL)
		return (NULL);

	z = 0;
	for (x = 0; *(str + x) != '\0'; x++)
		z++;
	s = (char *)malloc((x + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);

	for (y = 0; y < x; y++)
		*(s + y) = *(str + y);

	return (s);
}
