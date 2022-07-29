#include "hash_tables.h"

/**
 *hash_table_get - retrieves a value associated with a key
 *@ht: pointer to the hash table
 *@key: the key used for searching
 *
 *Return: value associated with the key NULL otherwise
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	hash_node_t *node = ht->array[index];

	while (node != NULL &&
		strcmp(ht->array[index]->key, key) != 0)
	{
		node = node->next;
	}

	return (node->value);
}
