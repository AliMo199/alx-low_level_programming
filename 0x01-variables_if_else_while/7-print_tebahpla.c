#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print a-z in reverse
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char ch1 = 'z';

	while (ch1 >= 'a')
	{
		putchar(ch1);
		--ch1;
	}
	putchar('\n');

	return (0);
}
