#include "dog.h"
/**
 *init_dog - initialize a new dog
 *@d: the dog character
 *@name: the dogs name
 *@age: the dogs age
 *@owner: the dogs owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
