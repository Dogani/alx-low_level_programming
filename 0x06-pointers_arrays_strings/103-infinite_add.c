#include "main.h"
#include <stdio.h>
/**
 * infinite_add - adds two numbers
 * @n1: number one.
 * @n2: number two.
 * @r: buffer that the function will use to store the result.
 * @size_r: buffer size:
 * Return: the pointer to dest.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int c1 = 0, c2 = 0, op, bg, dr1, dr2, add = 0;

while (*(n1 + c1) != '\0')
c1++;
while (*(n2 + c2) != '\0')
c2++;
if (c1 >= c2)
bg = c1;
else
bg = c2;
if (size_r <= bg + 1)
