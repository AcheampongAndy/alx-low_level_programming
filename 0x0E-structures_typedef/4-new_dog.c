#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
* newStr - to return a new string
* @strg: the string
* Return: a pointer
*/
char *newStr(char *strg)
{
	int x, y;

	char *str;

	if (strg == NULL)
		return (NULL);

	for (x = 0; strg[x] != '\0'; x++)
		;

	str = (char*) malloc(x * sizeof(char) + 1);

	if (str == NULL)
		return (NULL);

	for (y = 0; strg[y] != '\0'; y++)
		str[y] = strg[y];
	str[y] = '\0';

	return (str);
}
/**
* new_dog - creates a new dog
* @name: dog's name
* @age: dog's age
* @owner: dog's owner
* Return: new_dog (dog_t)
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *dname, *downer;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dname = newStr(name);
	if (dname == NULL)
	{
		free(dog);
		return (NULL);
	}

	downer = newStr(owner);
	if (downer == NULL)
	{
		free(dog);
		free(dname);
		return (NULL);
	}

	dog->name = dname;
	dog->age = age;
	dog->owner = downer;
	return (dog);
}
