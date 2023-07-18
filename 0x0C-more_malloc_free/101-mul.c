#include <stdio.h>
#include <stdlib.h>

/**
 * main - Check the code
 * @argc: number of arguments
 * @argv: arguments
 * Return: Nothing
*/
int main(int argc, char **argv)
{
int num, num1, num2;

if (argc != 3)
{
printf("Error\n");
exit(98);
}
else
{
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
num = num1 *num2;
printf("%d\n", num);
return (0);
}
}
