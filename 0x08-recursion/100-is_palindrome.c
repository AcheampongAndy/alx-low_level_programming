#include "main.h"
/**
 * size - returns length of string
 * @s: string
 * Return: size
 */

int size(char *s)
{

	if (*(s + 0) != '\0')
	{
		return (1 + size(s + 1));
	}
	else
	{
		return (0);
	}
}

/**
 * comp - compare characters
 * @s: string
 * @num1: beginning index
 * @num2: end index
 * Return: 0 or 1
 */

int comp(char *s, int num1, int num2)
{
	if (*(s + num1) != *(s + num2))
	{
		return (0);
	}
	else if (num1 == num2 && *(s + num1) == *(s + num2))
	{
		return (1);
	}
	else if (num1 == num2 - 1 && *(s + num1) == *(s + num2))
	{
		return (1);
	}
	else
	{
		return (comp(s, num1 + 1, num2 - 1));
	}
}
/**
 * is_palindrome - string is a palindrome
 * @s: string
 * Return: integer, 1 if palindrom, 0 if not
 */

int is_palindrome(char *s)
{
	int siz, num1, num2;

	siz = size(s);
	num1 = 0;
	num2 = siz - 1;

	if (siz == 0 || siz == 1)
	{
		return (1);
	}
	else
	{
		return (comp(s, num1, num2));
	}
}
