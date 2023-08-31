#include "main.h"

/**
 * binary_to_uint - converts a binary num to unsigned int
 * @b: string containing the binary num
 * Return: the converted num
 */
unsigned int binary_to_uint(const char *b)
{
	int y;
	unsigned int a = 0;

	if (!b)
		return (0);

	for (y = 0; b[y]; y++)
	{
		if (b[y] < '0' || b[y] > '1')
			return (0);
		a = 2 * a + (b[y] - '0');
	}

	return (a);
}
