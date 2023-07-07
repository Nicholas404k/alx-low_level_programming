#include <stdio.h>
#include "main.h"
/**
  *main - program that prints the number of arguments passed into it
  *@argv: the array of arguments
  *@argc: the numbers of arguments
  *Return: always 0
  */

int main(int argc, char *argv[])
{
	(void) argv; /*Ignore the argv*/
	printf("%d\n", argc - 1);

	return (0);
}
