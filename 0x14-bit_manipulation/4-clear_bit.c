#include "main.h"

/**
 * clear_bit - Sets the value of a given bit to 0
 * @n: Pointer to the num to change
 * @index: index of the bit to clear
 * Return: 1 if success, -1 if failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
