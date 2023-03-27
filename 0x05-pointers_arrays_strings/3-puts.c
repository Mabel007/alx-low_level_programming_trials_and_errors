#include "main.h"

/**
 * _puts -  prints a string, followed by a new line, to stdout
 * @str: the string
 * Return: the length of the string
 */

void _puts(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
	_puts(str[a]);
	a++;
	}
	_puts('\n');
}
