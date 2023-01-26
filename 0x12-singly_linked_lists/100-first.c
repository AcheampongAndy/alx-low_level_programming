#include "lists.h"

void __attribute__((constructor)) primary(void);

/**
 * primary - print before the main function
 * Return: void
 */

void primary(void)
{
	printf("You're beat! and yet, you must allow,\n ");
	printf("I bore my house upon my back!\n");
}
