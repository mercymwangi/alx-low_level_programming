#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - returns the lenth of a str
 * @s: string
 * Return: the lenthg of str
 */
int _strlen(char *s)
{
	int j;

	j = 0;

	while (s[j] != '\0')
	{
		j++;
	}
	return (j);
}
/**
 * *_strcpy - copies  the string pointed to by src
 * includes null byte(\0)
 * @dest: pointer to the buffer inwhich string is copied
 * @src: The string
 * Return: The pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, l;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}
	for (l = 0; l < len; l++)
	{
		dest[l] = src[l];
	}
	dest[l] = '\0';
	return (dest);
}
/**
 * new_dog - creates new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 * Return: pointer to the new dog, (success), otherwise NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
