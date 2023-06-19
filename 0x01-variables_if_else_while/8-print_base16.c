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
	char n;

	for (n = '0'; n <= '9'; ++n)
		putchar (n);
	for (n = 'a'; n <= 'f'; ++n)
		putchar (n);

	putchar ('\n');

	return (0);
}
