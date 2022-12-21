#include "main.h"
/**
* *_strncpy - copies a sting
* @dest: the string to copy to
* @src: the sting to copy from
* @n: the number of bytes
*
* Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int num, num1;

	num = 0;
	num1 = 0;
	while (num < n && *(src + num) != '\0')
	{
		dest[num1] = *(src + num);
		num++;
		num1++;
	}
	dest[num1] = '\0';
	return (dest);
}
