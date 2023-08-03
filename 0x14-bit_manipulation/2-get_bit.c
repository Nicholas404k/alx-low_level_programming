#include "main.h"
/**
  *get_bit - function that returns the value of a bit
  *        at a given index.
  *
  *@n: the num to extract the bit from
  *@index: the index of the bit to get, starting from 0
  *Return: value of the bit at index or -1 if an error occurred
  */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int m;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	m = 1UL << index;

	return ((n & m) != 0);
}
