#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_create - creates a hash table and returns a pointer to the table
 * @size: The size of the table
 *
 * Return: the pointer to the table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (table == NULL)
	{
		return (NULL);
	}
	table->size = size;
	table->array = calloc(table->size, sizeof(hash_node_t));
	if (table->array == NULL)
		return (NULL);
	for (i = 0; i < table->size; i++)
	{
		table->array[i] = NULL;
	}
	return (table);
}
