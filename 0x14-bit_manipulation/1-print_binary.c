#include "main.h"

/**
 * print_binary - Prints the binary equivalent of a decimal num
 * @n: Num to print in binary
 */
void print_binary(unsigned long int n)
{
	int z, blue = 0;
	unsigned long int p;

	for (z = 63; z >= 0; z--)
	{
		p = n >> z;

		if (p & 1)
		{
			_putchar('1');
			blue++;
		}
		else if (blue)
			_putchar('0');
	}
	if (!blue)
		_putchar('0');
}
