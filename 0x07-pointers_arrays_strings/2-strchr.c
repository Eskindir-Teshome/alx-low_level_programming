#include "holberton"
#define NULL 0
/**
* _strchr - function
* @s: string to search in
* @c: char to return
*
* DEscription: function to locate a character in a string
* Return: pointer with first c or NULL if none
*/
char *_strchr(char *s, char c)
{
for(;; s++)
{
if (*s == c)
{
return (s);
}
if (*s == c && c == NULL)
return (s);
if (*S == NULL)
break;
}
return (NULL);
}