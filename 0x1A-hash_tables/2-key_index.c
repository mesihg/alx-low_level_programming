#include "hash_tables.h"

/**
 * key_index - gives the index at which the key/value
 *      pair should be stored in the array of the hash table
 * @key: key to get index of the value.
 * @size: size of the array of the hash table.
 *
 * Return: return the index of the key.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{

	unsigned long int hash_value = hash_djb2(key) % size;

	return (hash_value);
}
