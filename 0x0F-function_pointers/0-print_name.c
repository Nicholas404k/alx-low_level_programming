#include "function_pointers.h"
#include <stdio.h>
/**
  *print_name - function that prints a name
  *@name: the name to be printed
  *@f: A func ptr to specify any additional functionality
  *Return: nothing
  */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
