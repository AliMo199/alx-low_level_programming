#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
*		left in the year, taking leap years into account
*
* @m: month in number format
* @d: day of month
* @y: year
*/

void print_remaining_days(int m, int d, int y)
{
	/**
	 * leap year when it can be divided
	 * by 100 and 400 or by 4 evenly
	*/
	if ((y % 100 == 0 && y % 400 == 0) || (y % 4 == 0))
	{
		if (m > 2 && d >= 60)
		{
			d++;
		}

		printf("Day of the year: %d\n", d);
		printf("Remaining days: %d\n", 366 - d);

	}
	else
	{
		if (m == 2 && d == 60)
		{
			printf("Invalid date: %02d/%02d/%04d\n", m, d - 31, y);
		}
		else
		{
			printf("Day of the year: %d\n", d);
			printf("Remaining days: %d\n", 365 - d);
		}
	}
}
