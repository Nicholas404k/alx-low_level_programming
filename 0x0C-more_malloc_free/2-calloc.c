#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
  *_calloc - a function that allocates
  *          memory for an array, using malloc
  *@nmemb: the numbers of elements in the array
  *@size: the size of each elm in bytes
  *Return: Pointer to the allocated memory
  *        NULL if malloc fails
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	unsigned int total_size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;

	p = malloc(total_size);

	if (p == NULL)
		return (NULL);

	memset(p, 0, total_size);

	return (p);
}
