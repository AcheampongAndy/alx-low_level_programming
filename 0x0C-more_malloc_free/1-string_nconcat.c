#include "main.h"
/**
* string_nconcat - concatenates two strings.
* @s1: first string
* @s2: second string
* @n: the length
* Return: pointer
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;

	unsigned int s1_len, s2_len, x, size;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (s1_len = 0; *(s1 + s1_len) != '\0'; s1_len++)
		;
	for (s2_len = 0; *(s2 + s2_len) != '\0'; s2_len++)
		;
	if (n >= s2_len)
		n = s2_len;
	size = s1_len + n + 1;
	s = malloc(sizeof(char) * size);
	if (s == NULL)
		return (NULL);

	for (x = 0; x < s1_len; x++)
		*(s + x) = *(s1 + x);
	for (x = 0; x < n; x++)
		*(s + (x + s1_len)) = *(s2 + x);
	s[size - 1] = '\0';
	return (s);
}
