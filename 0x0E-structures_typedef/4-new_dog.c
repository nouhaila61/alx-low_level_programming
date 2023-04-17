#include <stdio.h>
#include "dog.h"
/**
 * _strcpy - copies a string src to dest
 * @dest: string to copy to
 * @src: string to copy from
 * Return: dest the string the has src content
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * _strlen - returns the length of a string
 * @s: the pointer of the string
 *
 * Return: len
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

/**
 * new_dog - creates a new dog struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to new dog struct, or NULL if malloc fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *new_name, *new_owner;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog = NULL)
		return (NULL);

	new_name = malloc(_strlen(name) + 1);
	if (new_name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_owner = malloc(_strlen(owner) + 1);
	if (new_name == NULL)
	{
		free(new_dog);
		free(new_name);
		return (NULL);
	}
	_strcpy(new_name,name);
	_strcpy(new_owner,new_owner);

	new_dog->name = new_name;
	new_dog->age = age;
	new_dog->owner = new_owner;

	return (new_dog);
}
