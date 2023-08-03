#include "main.h"
/**
  *flip_bits - function that returns the number of bits
  *           you would need to flip to get from one
  *          number to another.
  *
  *@n: the first number
  *@m: the second number
  *Return: number of bits to filp
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int XOR = n ^ m;
	unsigned int count = 0;

	while (XOR)
	{
		count += XOR & 1;
		XOR >>= 1;
	}

	return (count);
}
