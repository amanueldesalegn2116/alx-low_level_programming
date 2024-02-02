#include "hash_tables.h"
/**
*key_index - function that return the index using "key" and "size"
*@key: string used to generate index
*@size: size of hash tables' items
*Return: index where the key to store
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key);

	return (index % size);
}
