#include "hash_tables.h"

/**
 * key_index - index for the key given
 * @key: a pointer to an unsinged character
 * @size: An unsigned long integer representing
 * the size of the hash table.
 * Return: index of 'key' using djb2
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
