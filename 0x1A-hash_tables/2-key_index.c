#include "hash_tables.h"

/**
 * key_index - Calculate index at which the key/value pair should be stored in
 * the array of the hash table.
 * @key: The key used to calculate the index.
 * @size: The size of the array of the hash table.
 * Return: The index at which the key/value pair should be stored
 **/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	/* calc the hash val of the key using hash_djb2 func */
	unsigned long int hash_val = hash_djb2(key);
	/* calc  the index at which the key/val pair should be stored */
	unsigned long int hash_idx = hash_val % size;

	/* return the calculated index */
	return (hash_idx);
}
