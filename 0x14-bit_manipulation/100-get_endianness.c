#include "main.h"
/**
  *get_endianness - function to check the endianness of
  *                 the system.
  *Return: 0 if big endian, 1 if little endian
  */

int get_endianness(void)
{
	unsigned int n = 1;
	char *endian;

	endian = (char *)&n;

	return (*endian);
}
