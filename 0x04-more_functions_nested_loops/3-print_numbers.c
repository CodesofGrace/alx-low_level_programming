#include "main.h"

/**
 * print_numbers - Print from 0 to 9
 * Return: The numbers from 0 to 9
 */

void print_numbers(void)

{
	int g;

	for (g = 0; g <= 9; g++)
	{
		_putchar(g + '0');
	}
	_putchar('\n');
}
