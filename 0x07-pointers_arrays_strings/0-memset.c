#include "main.h"
/**
  *_memset -  function fills the first n bytes
  *of the memory area pointed to by s
  *with the constant byte b
  *@s: starting address of memory to be filled
  *@b: desired value
  *@n:  number of bytes to be changed
  *Return: changed array with new value
  */

char *_memset(char *s, char b, unsigned int n)
{
	int ch = 0;

	for (; n > 0; ch++)
	{
		s[ch] = b;
		n--;
	}
	return (s);
}
