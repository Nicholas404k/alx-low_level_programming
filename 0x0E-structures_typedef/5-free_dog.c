#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - Frees memory allocated for a dog
 * @d: Pointer to the dog to be freed
 *
 * Description: This function frees the memory allocated for a dog.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
