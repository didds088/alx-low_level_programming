#include"main.h"

/**
 * times_table - prints the 9 times table
 *
 * return void
 */

void times_table(void)
{
	int num, mult, prod;

	for (n = 0; n <= 9; n++)
	{
		_putchar('0');
		for (mult = 1; mult <= 9; ++mult)
		{
			_putchar(',');
			_putchar(' ');

			prod = num * mult;

			if (prod <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((prod / 10) + 48);
			}
			_putchar((prod % 10) + 48);
		}
		_putchar('\n');
	}
}
