#include "main.h"
#include <stdio.h>
/**
 * get_bit - get value of bit at given index
 * @n: number to check
 * @index: index starting from 0, of the bit we want to get
 * Return: Value of bit at index, or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int hold1;

	if (index > 64)
		return (-1);

	hold1 = n >> index;

	return (hold1 & 1);
}
