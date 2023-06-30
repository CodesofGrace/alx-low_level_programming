#include "main.h"

/**
 * reverse_array - Reversethe content of an array of integers
 * @a: Array of integers to tbe reversed
 * @n: The number of element in the the array.
 */

void reverse_array(int *a, int n)

{
	int tmp, index;

	for (index = n - 1; index >= n / 2; index--)
	tmp = a[n - 1 - index];
	a[n - 1 - index] = a[index];
	a[index] = tmp;
}
