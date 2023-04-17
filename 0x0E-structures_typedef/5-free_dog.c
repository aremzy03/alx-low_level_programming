#include "dog.h"
#include <stdlib.h>
/**
 *free_dog - free the allocated memory for d
 *@d: the pointer to be freed
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
