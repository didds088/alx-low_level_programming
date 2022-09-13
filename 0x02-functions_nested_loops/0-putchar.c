#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints _putchar, followed by a new line
 *
 * Return:0
 */

int main(void)
{
	int i = 0;
	char n[] = "_putchar";

	while (i < 8)
	{
		_putchar(n[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
