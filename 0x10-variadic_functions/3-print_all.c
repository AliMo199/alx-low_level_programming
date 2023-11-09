#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to function
 */
void print_all(const char * const format, ...)
{
	int n = 0;
	char *str, *sep = "";

	va_list list1;

	va_start(list1, format);

	if (format)
	{
		while (format[n])
		{
			switch (format[n])
			{
				case 'c':
					printf("%s%c", sep, va_arg(list1, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(list1, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(list1, double));
					break;
				case 's':
					str = va_arg(list1, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					n++;
					continue;
			}
			sep = ", ";
			n++;
		}
	}

	printf("\n");
	va_end(list1);
}
