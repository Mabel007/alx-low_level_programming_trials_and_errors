#include "main.h"

/**
 * swap_int - swap the values of two integers
 * @a: first int
 * @b: second int
 *
 * Return: 0 Always
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

