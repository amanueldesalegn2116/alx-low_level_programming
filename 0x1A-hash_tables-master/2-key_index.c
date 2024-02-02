#include "hash_tables.h"
/**
*key_index - Function
*@key: String
*@size: Size Of Hash Table
*Return: Index Where The Key To Store
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key);

	return (index % size);
}
