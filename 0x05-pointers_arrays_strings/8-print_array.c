#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers.
 * @: Array of numbers
 * @n Number of elements to be printed
 * Return: void
 */
void print_array(int *a, int n)
	/* the below is a description of what we want to achieve .*/
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);
		if (j != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
