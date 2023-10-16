#include "main.h"

/**
 * rev_string - reverses string
 * @s: string reversed
 */
void rev_string(char *s)
{
	char tmp;
	int i, l, l1;

	l = 0;
	l1 = 0;

	while (s[l] != '\0')
	{
		l++;
	}

	l1 = l - 1;

	for (i = 0; i < l / 2; i++)
	{
		tmp = s[i];
		s[i] = s[l1];
		s[l1--] = tmp;
	}
}
