#include <stdio.h>
/**
  *main - Entry point
  *Description: 'Prints the alphabet in lowercase except q and e'
  *Return: always 0
  */
int main(void)

{

	int x = 97;

	while (x <= 122)
	{
		if (x == 101 || x == 133)
		{
			x++;
			continue;
		}
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
