#include "main.h"
/**
 * _atoi - is a function
 * @s: pointer
 * Return: int.
 */
int _atoi(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		putchar(s[i]);
		s++;
	}
	return (0);
}
