#include"holberton.h"
/**
 * _isalpha - checks foralphabet character
 *
 * Description: checks for lower and upper alpha chars
 */
int _isalpha(int c)
{
  if (c >=65 && c <= 122)
    {
      return (1);
    }
  else if (c >= 97 && c <= 122)
    {
      return (1);
    }
  else
    {
      return (0);
    }
  return (c);
}
