#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * hash_table_set - inserts a new hash node and also tests for collisions
 * @ht: the hash table
 * @key: the key of the hash value
 * @value: the value to be inserted
 *
 * Return: 1 on success and ) on failure
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node;
	unsigned long int index;

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
	{
		return (0);
	}
	if (key == NULL || key[0] == '\0' || value == NULL)
	{

		return (0);
	}
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;
	index = key_index((unsigned char *)node->key, ht->size);
	if (index >= ht->size)
	{
		free(node->key);
		free(node->value);
		free(node);
		return (0);
	}
	if (ht->array[index] == NULL)
	{
		ht->array[index] = node;
	}
	else
	{
		node->next = ht->array[index];
		ht->array[index] = node;
	}
	return (1);
}
