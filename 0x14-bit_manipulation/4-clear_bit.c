#include "main.h"
/**
  *clear_bit - function that sets the value of a bit to
  *          0 at a given index.
  *
  *@n: pointer to the unsigned long int number
  *@index: the index of the bit to be cleared, starting from 0
  *Return: 1 if it worked, or -1 if an error occurred
  */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	m = ~(1UL << index);
	*n = *n & m;

	return (1);
}
