#include "main.h"

/**
  * set_bit - sets the value of a bit at a given idex to 1
  * @n: unsigned long to be changed
  * @index: index to change
  * Return: 1 if working correctly or -1 if error occurs
  */

int set_bit(unsigned long int *n, unsigned int index)
{
unsigned int a;

if (index > 63)
return (-1);

a = 1 << index;
*n = (*n | m);

return (1);
}
