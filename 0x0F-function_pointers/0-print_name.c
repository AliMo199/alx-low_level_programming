#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - print name
 * @name: name printed
 * @f: pointer to printing function
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
