#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
/**
* hash_table_print - Prints the keys and values of the hash table
* @ht: The hash table
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	int printed;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (printed > 0)
			{
				printf(", ");
			}
			printf("'%s': '%s'", node->key, node->value);
			printed = 1;
			node = node->next;
		}
	}
	printf("}\n");
}