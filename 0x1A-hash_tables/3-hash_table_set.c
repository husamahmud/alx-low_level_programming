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
 * free_node - Frees memory allocated by a hash node.
 * @node: The hash node to be freed.
 **/
void free_node(hash_node_t *node)
{
	free(node->key);
	free(node->value);
	free(node);
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
	/* calc the index of the key */
	unsigned long int idx = key_index((const unsigned char *) key, ht->size);
	hash_node_t *new_node;
	hash_node_t *curr;

	if (ht == NULL || key[0] == '\0')
		return (0);

	/* create a new node for the key/val pair */
	new_node = create_hash_node(key, value);
	if (new_node == NULL)
		return (0);

	/* check for the index is empty */
	if (ht->array[idx] == NULL)
	{
		ht->array[idx] = new_node;
		return (1);
	}

	/* handle collision by chaining */
	curr = ht->array[idx];
	while (curr->next != NULL)
	{
		/* if the key already exist, update the value */
		if (strcmp(curr->key, key) == 0)
		{
			free(curr->value);
			curr->value = strdup(value);
			free_node(new_node);
			return (1);
		}
		curr = curr->next;
	}

	/* add the new node at the end of the linked list */
	curr->next = new_node;
	return (1);
}
