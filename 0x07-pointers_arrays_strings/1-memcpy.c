#include "main.h"
/**
  *_memcpy -  function that copies memory area
  *@dest: mem where it is stored
  *@src: mem where it is copied
  *@n: # of bytes
  *Return: copied memory
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int p = 0;
	int m = n;

	for (; p < m; p++)
	{
		dest[p] = src[p];
		n--;
	}
	return (dest);
}
