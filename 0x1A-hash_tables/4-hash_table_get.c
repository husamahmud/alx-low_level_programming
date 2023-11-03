#include "hash_tables.h"

/**
 * hash_table_get - Retrieves the value associated with a key in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key string.
 * Return: The value associated with the key, or NULL if the key is not found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;

	/* check for invalid input params */
	if (ht == NULL || key == NULL)
		return (NULL);

	/* calc the index for the key */
	idx = key_index((const unsigned char *) key, ht->size);

	/* check if the key is found in the hash table */
	if (ht->array[idx] != NULL && ht->array[idx]->value != NULL)
		return (ht->array[idx]->value);

	/* key is not in the hash table */
	return (NULL);
}
