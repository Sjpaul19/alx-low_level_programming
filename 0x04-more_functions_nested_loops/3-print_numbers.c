#include "main.h"

/**
 * print_numbers: prints number 0 to 9
 * Return: always return 0
 */

void print_numbers(void)

{


	int x;

	for (x = 0; x < 10; x++)
	{
		_putchar(x + '0');
	}
	_putchar('\n');

}
