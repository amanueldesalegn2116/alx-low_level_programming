#include "hash_tables.h"
/**
*hash_table_get - retrive value crosponding to key in ht
*@ht: hash table
*@key: key used for hashing
*Return: value on success otherwise nuil
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *temp;

	if (ht == NULL || key == NULL || !(*key))
		return (NULL);
	idx = key_index((const unsigned char *) key, ht->size);
	temp = ht->array[idx];
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}
