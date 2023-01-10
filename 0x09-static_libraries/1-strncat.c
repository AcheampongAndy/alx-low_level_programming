#include "main.h"
/**
* *_strncat - concate two string
* @dest: the first string
* @src: the second string
* @n: the of bytes needed for src
*
* Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int num1, num2;

	num1 = 0;
	while (*(dest + num1) != '\0')
	{
		num1++;
	}
	num2 = 0;
	while (num2 < n && *(src + num2) != '\0')
	{
		*(dest + num1) = *(src + num2);
		num2++;
		num1++;
	}
	*(dest + num1) = '\0';
	return (dest);
}
