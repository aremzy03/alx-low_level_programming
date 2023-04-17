#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 *new_dog - copies name and owner of dog to new dog
 *@name: the name of the dog
 *@age: the age of the dog
 *@owner: the owner of the dog
 *
 *Return: the dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int size1, size2;

	size1 = strlen(name) + 1;
	size2 = strlen(owner) + 1;
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * size1);
	if (dog->name == NULL)
	{
		free(dog->name);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * size2);
	if (dog->owner == NULL)
	{
		free(dog->owner);
		return (NULL);
	}
	strcpy(dog->name, name);
	strcpy(dog->owner, owner);
	dog->age = age;
	return (dog);
}
