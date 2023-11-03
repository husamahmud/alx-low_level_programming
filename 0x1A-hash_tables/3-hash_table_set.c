#include "hash_tables.h"

/**
 * create_hash_node - Creates a new hash node for a key/value pair.
 * @key: The key to be stored in the node.
 * @value: The value to be stored in the node.
 * Return: A pointer to the newly created hash node.
 **/
hash_node_t *create_hash_node(const char *key, const char *value)
{
	hash_node_t *new_node = (hash_node_t *) malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		return (NULL);

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (NULL);
	}

	new_node->next = NULL;
	return (new_node);
}

/**
 * hash_table_set - Adds or updates a key/value pair in the hash table.
 * @ht: The hash table.
 * @key: The key to be inserted or updated.
 * @value: The value to be associated with the key.
 * Return: 1 if the operation is successful, 0 otherwise.
 **/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	hash_node_t *new_node;
	unsigned long int idx;

	if (ht == NULL || key == NULL || key[0] == '\0' || value == NULL)
		return (0);

	idx = key_index((const unsigned char *) key, ht->size);
	node = ht->array[idx];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			if (node->value == NULL)
				return (0);
			return (1);
		}
		node = node->next;
	}

	new_node = create_hash_node(key, value);
	if (new_node == NULL)
		return (0);

	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;
	return (1);
}
