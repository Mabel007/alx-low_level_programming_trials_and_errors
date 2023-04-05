#include "main.h"
#include <stdio.h>

int check_prime(int n, int num);

/**
 * is_prime_number - returns 1 if the number is prime
 * @n: the number used to check
 * Return: int value
 */

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}
/**
 * check_prime - check if the number is prime
 * @n: the number used to check
 * @num: the iteration number
 * Return: 1 for prime number 0 if not prime
 */

int check_prime(int n, int num)
{
	if (n <= 1)
		return (0);
	if (n % num == 0 && num > 1)
		return (0);
	if ((n / num) < num)
		return (1);
	return (check_prime(n, num + 1));

}
