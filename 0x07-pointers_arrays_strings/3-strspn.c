#include "main.h"

/**
 * _strspn - Entry point
 * @s: string to serach from
 * @accept: string to search
 * Return: number of characters matched
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0' ; i++)
	{
		for (j = 0; s[i] != accept[j] ; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}
	return (0);
}
