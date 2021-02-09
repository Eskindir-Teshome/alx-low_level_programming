#include"holberton.h"
/**
 * jack_bauer - function
 *
 * Description: prints every minute of the day, starting from 0:00 to 23:59
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
  int hours;
  int minues;

  for (hours = 0; hours < 24; hours++)
    {
      for (minutes = 0; minutes < 60; minutes++)
	{
	  _putchar(hour / 10 + '0');
	  -putchar(hours % 10 + '0');
	  -putchar(':');
	  _putchar(minutes / 10 +'0');
	  _putchar(minutes % 10 + '0');
	  _putchar (10);
	}
    }
}

