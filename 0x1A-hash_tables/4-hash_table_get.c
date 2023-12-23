#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_get - Finds the value of a hash node using the key
 * @ht: The hash table array
 * @key: The key of the hash node
 *
 * Return: The value if it exists an =d NULL if it doesn't
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;
	char *value;

	index = key_index((unsigned char *)key, ht->size);
	node = ht->array[index];
	if (node == NULL)
	{
		return (NULL);
	}
	value = node->value;
	return (value);

}
