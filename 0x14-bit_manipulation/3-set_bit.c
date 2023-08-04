#include "main.h"

/**
 * set_bit - sets a given bit at an index to 1
 * @n: points to a number to change
 * @index: index of the bit to be set to 1
 *
 * Return: 1 if success, -1 if unsuccessful
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
