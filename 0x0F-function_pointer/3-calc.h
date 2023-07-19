/**
 * get_op_func - function that selects the correct function
 * to perform the operation asked by the user
 *
 * @s: is the operator passed as argument to the program
 *
 * Return: returns a pointer to the function
 * that corresponds to the operator given as a parameter
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i = 0;

while (i < 5)
{
if (s[0] == ops[i].op[0])
{
return (ops[i].f);
}
i++;
}

return (NULL);
}
administrator@TTCLHQISSLT030-2 0x0F-function_pointers % cat 3-calc.h
#ifndef HEADER_FILE
#define HEADER_FILE
#include <stdio.h>
#include <stdlib.h>
/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
char *op;
int (*f)(int a, int b);
} op_t;

int (*get_op_func(char *s))(int, int);

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

#endif
