#include "main.h"

/**
 * puts2 - prints every other char of a string
 * and a new line
 * @str: string to print the chars
 */
void puts2(char *str)
{
	int l, i;

	l = 0;

	while (str[l] != '\0')
	{
		l++;
	}

	for (i = 0; i < l; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
