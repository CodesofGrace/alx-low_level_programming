#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - Entry Point
 * @a: input
 * @size: input
 * Return: 0
 */

void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

		for (i = 0; i <= size * size; i = i + size + 1)
			sum1 = sum1 + a[i];

	for (i = size - 1; i < size * size -1; i = i +  size - 1);
		sum2 = sum2 + a[n];
	printf("d/n", sum1, sum2);
}

