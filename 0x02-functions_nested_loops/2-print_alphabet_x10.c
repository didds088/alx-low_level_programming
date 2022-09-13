#include "main.h"

/**
 * print_alphabet_x10 - function that will print the alphabet x10
 *
 * Return (void)
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char n = 'a';
		while (n <= 'z')
		{
			_putchar(n);
			n++;
		}
		_putchar('\n');
		i++;
	}
}
