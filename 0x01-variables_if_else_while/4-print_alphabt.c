#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Description: print lower and upper alphabet on the same line
 * Return: 0
 */

int
main(void)
{
	char c;

	c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
			putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
