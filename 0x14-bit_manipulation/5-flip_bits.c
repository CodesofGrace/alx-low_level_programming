#include "main.h"

/**
 * flip_bits - coun and chamge a given number of bits
 * to get from one number to another
 * @n: first number to count and change
 * @m: second number to count and change
 *
 * Return: number of bits to be changed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
