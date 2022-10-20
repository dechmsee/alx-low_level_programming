#include "hash_tables.h"

/**
* key_index - Get index at which a key should
* 		be stored in an array of a hash table.
* @key: The key to get the index.
* @size: Size  of the hash table array.
*
* Return: Index of the key.
* Description: Uses the djb2 algorithm.
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
