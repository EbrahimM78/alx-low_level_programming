#include "main.h"

/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another
 * @n: number one.
 * @m: number two.
 *
 * Return: number of bits.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int coin = n ^ m, bits = 0;

while (coin > 0)
{
bits += (coin & 1);
coin >>= 1;
}

return (bits);
}
