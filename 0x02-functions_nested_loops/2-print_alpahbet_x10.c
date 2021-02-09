#include"holberton.h"
/**
 * print_alphabet_x10 - print alphabet 10*
 *
 * Desciption: print alphabet lowercase in ascending oder 10x
 */
void print_alphabet_x10(void)
{
  char ch = 'a';
  int i = 0;

  while (i < 10)
    {

      for (ch = 'a'; ch <= 'z'; ch++)
	{
	  _putchar(ch);
	}
	     i++;
	   _putchar(10);
	   }
    }
