#include "main.h"
#include <stdlib.h>
/**
  *array_range - function that creates an array of integers
  *@min: the smallest integer
  *@max: the maximium integer
  *Return: pointer to the newly created array
  *        If min > max, return NULL
  *        If malloc fails, return NULL
  */

int *array_range(int min, int max)
{
	int *myarray;
	int size, n;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	myarray = malloc(sizeof(int) * size);

	if (myarray == NULL)
		return (NULL);

	for (n = 0; n < size; n++)
		myarray[n] = min++;

	return (myarray);
}
