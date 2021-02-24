#include "holberton.h"
#include <studio.h>
/**
* _put_recursion - function
* @s: string in which to print
*
* Description: function to print a string \n
* Return: 0
*/
void _put_recursion(char *s)
{
if (*s == 0)
{
_putchar(10);
}
else
{
_putchar(*s);
_putchar_recursion(s + 1);
}
}
