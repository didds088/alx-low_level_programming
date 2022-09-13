#include "main.h"

/**
 * main - Entry point
 *
 * Description:print_alphabet a-z
 * using _putchar function
 *
 */

void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
}
