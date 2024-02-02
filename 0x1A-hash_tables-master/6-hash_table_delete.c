#include "hash_tables.h"
/**
*hash_table_delete - frees the  hash table
*@ht: hash table to be freed
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *list, *temp;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		list = ht->array[i];
		while (list)
		{
			temp = list;
			list = list->next;
			if (temp->key)
				free(temp->key);
			if (temp->value)
				free(temp->value);
			if (temp)
				free(temp);
		}
	}
	free(ht->array);
	free(ht);
}
