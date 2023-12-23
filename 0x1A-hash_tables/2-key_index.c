#include "hash_tables.h"
/**
 * key_index - uses the hash function to find the index of a key
 * @key: The the key
 * @size: The size of the hash table
 *
 * Return: The index of hashtable of a key
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key);
	index = index % size;
	return (index);
}
