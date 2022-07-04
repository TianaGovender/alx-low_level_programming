#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

int _strlen(char *s);
char *_strcpy(char *s1, char *s2);

/**
 * _strlen - find len of string
 * @s: string
 * Return: len of string
 */

int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}

	return (c);
}

/**
 * _strcpy - copies strings
 * @s1: char
 * @s2: char
 * Return: copied string
 */

char *_strcpy(char *s1, char *s2)
{
	int i;

	for (i = 0; s2[i] != '\0'; i++)
	{
		s1[i] = s2[i];
	}

	s1[i] = '\0';
	return (s1);
}

/**
 * new_dog - initalizes struct
 *
 * @name: char
 * @age: float
 * @owner: char
 * Return: new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *name2, *owner2;
	int nlen, olen;

	dog_t *dog2 = malloc(sizeof(dog_t));

	if (dog2 == NULL)
		return (NULL);

	nlen = _strlen(name);
	name2 = malloc((nlen + 1) * sizeof(char));
	if (name2 == NULL)
	{
		free(dog2);
		return (NULL);
	}

	_strcpy(name2, name);

	olen = _strlen(owner);
	owner2 = malloc((olen + 1) * sizeof(char));
	if (owner2 == NULL)
	{
		free(name2);
		free(dog2);
		return (NULL);
	}

	_strcpy(owner2, owner);

	dog2->name = name2;
	dog2->age = age;
	dog2->owner = owner2;

	return (dog2);
}
