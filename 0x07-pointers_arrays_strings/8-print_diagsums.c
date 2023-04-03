#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix int
 * @a: array
 * @size: the size
 * Return: Always 0 (Success)
 */

void print_diagsums(int *a, int size)
{
	int firstSum,secondSum,j, n;

	firstSum = 0;
	secondSum = 0;

	for (j = 0; j <= (size * size); j = j + size + 1)
		firstSum = firstSum + a[j];

	for (n = size - 1; n <= (size * size) - size; n = n + size - 1)
		secondSum = secondSum + a[n];
	printf("%d, %d\n", firstSum, secondSum);
}
