#include <stdio.h>
#include <stdlib.h>
/**
 * main - function that prints its own opcodes
 * @argc: the number of arguments
 * @argv: the array of arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int num_bytes, i;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (i = 0; i < num_bytes; i++)
	{
		if (i == num_bytes - 1)
		{
			printf("%02hhx\n", arr[i]);
			break;
		}
		printf("%02hhx ", arr[i]);
	}
	return (0);
}
