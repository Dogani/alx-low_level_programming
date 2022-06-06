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
	int digit1;
	/* Space after declaration */
	for (digit1 = 0; digit1 <= 9; digit1++)
	{
		putchar((digit1 % 10) + '0');
		if (digit1 == 9)
			continue;
		else
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
