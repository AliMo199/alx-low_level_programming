#include "main.h"

/**
 * puts_half - prints half a string
 * and a new line
 * @str: string printed
 */
void puts_half(char *str)
{
	int len, n1, i;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		for (i = len / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	} else if (len % 2)
	{
		for (n1 = (len - 1) / 2; n1 < len - 1; n1++)
		{
			_putchar(str[n1 + 1]);
		}
	}
	_putchar('\n');
}
