#include "main.h"

/**
  * clear_bit - sets the value of a bit at a given index to 0
  * @n: unsigned long to change
  * @index: index to change to zero
  * Return: 1 if sucessful or -1 if error occurs
  */

int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned int m;

if (index > 63)
return (-1);

m = 1 << index;

if (*n & a)
*n ^= a;

return (1);
}
