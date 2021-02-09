#include"holberton.h"
/**
 * print_alphabet - function to print the alphabet
 *
 * Desciption: prints the alphabet in lowbercase in ascending order
 */
void print_alphabet(void)
{
  char ch;
  ch = 'a';
  while (ch <= 'z')
    {
      _putchar (ch);
      ch++;
    }
  _putchar(10);
}
