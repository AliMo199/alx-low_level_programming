#include "main.h"

/**
 * set_bit - set value of bit to 1 at given index
 * @n: decimal number passed by pointer
 * @index: index position changed, starting from 0
 * Return: 1 if it worked, -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > 64)
		return (-1);

	for (i = 1; index > 0; index--, i *= 2)
		;
	*n += i;

	return (1);
}
