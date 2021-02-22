#include "holberton.h"
/**
* _memcpy - function
* @sec: copy memory from
* @dest: copy memory area to
* @n: memory bytes parameter
* 
* Description: function to copy memory area
* Return: dest.
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
dest [i] = src [i];
return (dest);
}
