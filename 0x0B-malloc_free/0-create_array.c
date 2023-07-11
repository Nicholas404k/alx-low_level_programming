#include "main.h"
#include <stdlib.h>
/**
  *create_array - a function that creates an array of chars
  *and initializes it with a specific char
  *@size: the size of arrays
  *@c: the charatcers the arrays is created for
  *Return: array, or NULL if it fails
  */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

		if (size == 0)
	{
		return (NULL);
	}

		array = malloc(size * sizeof(char));

		if (array == NULL)
		{
			return (NULL);
		}

		for (i = 0; i < size; i++)
		{
			array[i] = c;
		}

		return (array);
}
