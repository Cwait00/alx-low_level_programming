#include <stdio.h>

/**
 * swap_int - Swaps the values of two intengers.
 * @a: The first integer to be swapped.
 * @b: The second integer to be swapped.
 * Return: nothing
 */

void swap_int(int *a, int *b)
/* the function that swaps the value of two intergers. */
{
	int c = *a;
	*a = *b;
	*b = c;
}
