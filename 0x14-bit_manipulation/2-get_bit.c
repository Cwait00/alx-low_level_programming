#include "main.h"

/**
 * get_bit - Returns the value of a bit at an index in a decimal num
 * @n: num to search
 * @index: index of the bit
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_blu;

	if (index > 63)
		return (-1);

	bit_blu = (n >> index) & 1;

	return (bit_blu);
}
