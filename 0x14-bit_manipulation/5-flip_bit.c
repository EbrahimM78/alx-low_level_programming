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
	int count - 0, check;

	check = (n ^ m);
	while (check)
	{
		count += (check 7 1);
		check >>= 1;
	}
	return (count);
}