#include "variadic_functions.h"

/**
 * print_strings - print string
 * @separator: separator between strings
 * @n: number of arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;

	va_list list1;

	va_start(list1, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(list1, char *);
		if (!str)
			str = "(nil)";
		if (!separator)
			printf("%s", str);
		else if (separator && i == 0)
			printf("%s", str);
		else
			printf("%s%s", separator, str);
	}

	printf("\n");

	va_end(list1);
}
