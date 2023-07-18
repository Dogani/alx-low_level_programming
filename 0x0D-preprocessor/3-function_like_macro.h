#include <stdio.h>
/**
 * main - prints the name of the file
 * Return: 0
 */
int main(void)
{
printf("%s\n", __FILE__);
return (0);
}
administrator@TTCLHQISSLT030-2 0x0D-preprocessor % cat 3-function_like_macro.h
#ifndef ABS_VALUE
#define ABS_VALUE

#define ABS(x) ((x) < (0) ? ((-1) * (x)) : (x))

#endif /*#ifndef ABS_VALUE*/
