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
	hash_node_t *node;

	/* check for invalid input params */
	if (ht == NULL || key == NULL)
		return (NULL);

	/* calc the index for the key */
	idx = key_index((const unsigned char *) key, ht->size);

	/* traverse the linked list at the calculated index */
	node = ht->array[idx];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;

	/* key not found in hash table */
	if (node == NULL)
		return (NULL);

	/* return the val associated with the key */
	return (node->value);
}
