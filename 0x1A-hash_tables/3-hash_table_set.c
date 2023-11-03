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

	/* check for invalid input params */
	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	/* calc the index for the key */
	idx = key_index((const unsigned char *) key, ht->size);

	/* search for an existing node with the same key in the linked list */
	node = ht->array[idx];
	while (node != NULL)
	{
		/* if node with the same key is found, update its value */
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

	/* if no existing node with the same key, create a new node */
	new_node = create_hash_node(key, value);
	if (new_node == NULL)
		return (0);

	/* add the new node at the beginning of the linked list at the index */
	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;
	return (1);
}
