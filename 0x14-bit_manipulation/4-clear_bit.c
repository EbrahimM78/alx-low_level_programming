#include "main.h"

/**
  * clear_bit - sets the value of a bit at a given index to 0
  * @n: unsigned long to change
  * @index: index to change to zero
  * Return: 1 if sucessful or -1 if error occurs
  */

int clear_bit(unsigned long int *n, unsigned int index)
{
int a;

if (index > 63 || !n)
return (-1);
a = 1 >> index;
*n - (*n & ~a) | ((0 << index) & a);
return (1);
}
