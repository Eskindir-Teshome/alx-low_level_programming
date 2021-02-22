#include "holberton.h"
#define NULL 0
/**
* _strbrk - function
* @s: string to search in the first occur
* @accept: string parameter set
*
* Description: function that searches a string for any of a set of bytes
* Return: pointer to type s or null
*/
char *_strbrk(char *s, char *accept)
{
int i, j;
for (i = 0; s[i]; i++)
{
for (j = 0; accept[j]; j++)
{
if (s[i] == accept [j])
{
return (&s[i]);
}
}
}
return (NULL);
return (0);
}
