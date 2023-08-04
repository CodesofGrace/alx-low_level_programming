#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0
 * @n: points to the number to be converted
 * @index: index of the bitif
 *
 * Return: 1 if successful, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
