#include "main.h"

/**
 * get_bit - returns a bit value in an index in a decimal number
 * @n: number set to search
 * @index: index of the bit to get value from
 *
 * Return: value of  bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
