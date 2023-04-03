#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of two diagonals of a square matrix
 * @a: Array or square matrix
 * @size: Size of the square matrix
 * Return: Nothing
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int idx;

	for (idx = 0; idx < size; idx++)
	{
		sum1 += a[idx];
		a += size;
		sum2 += a[idx];
		a -= size;
	}
	printf("%d, %d\n", sum1, sum2);
}
