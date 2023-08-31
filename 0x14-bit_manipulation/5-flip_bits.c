#include "main.h"

/**
 * flip_bits - Counts the num of bits to change
 * to get from one num to another
 * @n: First num
 * @m: Second num
 * Return: Num of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int z, blu = 0;
	unsigned long int zizo;
	unsigned long int volcano = n ^ m;

	for (z = 63; z >= 0; z--)
	{
		zizo = volcano >> z;
		if (zizo & 1)
			blu++;
	}

	return (blu);
}
