#include "hash_tables.h"

/**
 * hash_djb2 - Hash function implementing djb2 algorithm.
 * @str: string to hash.
 *
 * Return: calculated hash.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int cal;

	hash = 5381;
	while ((cal = *str++))
		hash = ((hash << 5) + hash) + cal; /* hash * 33 + cal */

	return (hash);
}
