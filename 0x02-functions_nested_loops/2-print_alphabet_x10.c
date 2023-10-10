#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	char ch1;
	int i;

	i = 0;

	while (i < 10)
	{
		ch1 = 'a';
		while (ch1 <= 'z')
		{
			_putchar(ch1);
			ch1++;
		}
		_putchar('\n');
		i++;
	}
}
