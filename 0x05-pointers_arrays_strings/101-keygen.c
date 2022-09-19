#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * generates random valid passwords for the program
 * Return passwords
 */

int main(void)
{
	int num;

	srand(time(0));
	num = rand();
	printf("%i\n", num);
	return (0);
}
