#include "main.h"
/**
  *set_bit -  function that sets the value of a bit to
  *          1 at a given index.
  *
  *@n: the ptr to the unsigned long int variable
  *@index: index of the bit to be set starting from 0.
  *Return: 1 if it worked, or -1 if an error occurred
  */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m;

	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	m = 1UL << index;
	*n |= m;

	return (1);
}
