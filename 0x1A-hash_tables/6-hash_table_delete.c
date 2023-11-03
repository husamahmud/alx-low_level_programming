#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: A pointer to the hash table.
 **/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	hash_node_t *temp;

	/* check for invalid input param */
	if (ht == NULL)
		return;

	/* interate through each index in the hash table */
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		/* frees the nodes in the linked list */
		while (node != NULL)
		{
			temp = node;
			node = node->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}
	/* free the array and the hash table struct */
	free(ht->array);
	free(ht);
}
