#include "holberton.h"
#include <stdio.h>
/**
* print_array - function
* @a: operand
* @n: operand
*
* Desciption: prints n elements of an array of integers
* Return: int
*/
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
if (i != 0)
{	
printf(", ");
}
printf("%d", a[i]);
}
printf("\n");
}
