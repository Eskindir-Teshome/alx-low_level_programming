#include"holberton.h"
/**
 * print_sign - function to print of a number
 *
 * Description: printing positive, negative, or zero
 * Return: 1 and prints + if 0 > 0, return 0/print 0 if n = 0, return -1/print - if n < 0
 */
int print_sign(int n)
{
  if ( n > 0)
    {
     _putchar('+');
     return (1);
    }
     elseif ( n == 0)
       {
	_putchar('0');
	return (0);
       }
     else
       {
	 _putchar('-');
	 return (-1);
       }
  return (n);
}
