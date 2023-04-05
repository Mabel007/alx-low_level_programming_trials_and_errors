#include "main.h"

/**
 * _strlen_recursion - return the length of the string
 * @s: the string to be counted
 * Return: int value
 */

int _strlen_recursion(char *s)
{
	if  (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}

