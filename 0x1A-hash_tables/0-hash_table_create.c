#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 *
 * @size:
 *
 * Return:
 **/
hash_table_t *hash_table_create(unsigned long int size)
{
	/* allocate mem for the hash table struct */
	hash_table_t *ht = (hash_table_t *) malloc(sizeof(hash_table_t));
	unsigned long int i;

	/* handle allocation failure */
	if (ht == NULL)
		return (NULL);

	/* set the size of the hash table */
	ht->size = size;
	/* allocate mem for the array of buckets */
	ht->array = (hash_node_t **) malloc(sizeof(hash_node_t *) * ht->size);

	/* handle allocation failure */
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	/* initialize all buckets to NULL */
	for (i = 0; i < size; i++)
		ht->array[i] = NULL;

	/* return a pointer to the newly created hash table */
	return (ht);
}
