#include <stdio.h>
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
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
