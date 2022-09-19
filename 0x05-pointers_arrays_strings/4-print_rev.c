#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: string parameter input
 * Return: 0
 */

int print_rev(char *s)
{
	int len;

	len = strlen(s);
	while (len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}
