#include "hash_tables.h"
/**
*hash_table_print - print key:value of ht
*@ht: hash table
*
*
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;
	int comma = 0;

	if (ht == NULL)
		return;
	i = 0;
	printf("{");
	while (i < ht->size)
	{
		while (ht->array[i])
		{
			temp = ht->array[i];
			while (temp)
			{
				if (comma)
					printf(", ");
				printf("'%s': '%s'", temp->key, temp->value);
				temp = temp->next;
				comma = 1;
			}
			break;
		}
		i++;
	}
	printf("}\n");


}
