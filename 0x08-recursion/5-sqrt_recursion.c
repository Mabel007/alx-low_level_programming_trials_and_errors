#include "main.h"
#include <stdio.h>

int _sqrt(int n, int num);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root
 * Return: The natural square root
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - calculate the natural sqaure root
 * @n:the number used to calculate the square root
 * @num: iteration number
 * Return: The natural square root
 */

int _sqrt(int n, int num)
{
	int sqrt = num * num;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (num);
	return (_sqrt(n, num + 1));
}
