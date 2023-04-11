#include "main.h"

/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another
 * @n: number one.
 * @m: number two.
 *
 * Return: number of bits.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
int mark;

if (index > 63 || !n)
return (-1);
mark = 1 << index;
*n = (*n & ~mark) | ((0 << index) & mark);
return (1);
}
