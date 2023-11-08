#include "function_pointers.h"

/**
 * int_index - search for integer
 * @array: array to search in
 * @size: size of array
 * @cmp: pointer to comparing function
 *
 * Return: index of first element for which
 * the cmp function does not return 0, or -1 if no match is found
 * or size negative
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (array && cmp)
	{
		for (j = 0; j < size; j++)
		{
			if (cmp(array[j]) != 0)
				return (j);
		}
	}

	return (-1);
}
