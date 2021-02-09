#include"holberton.h"
/**
 * print_last_digit - function
 *
 * Desciption: prints last digit of a number.
 * Return: Alays 0 (Success)
 */
int print_last_digit(int r)
{
  r = (r % 10);

  if (r < 0)
    {
      r = (r * -1);
    }
  _putchar(r + '0');
  return (r);
}
