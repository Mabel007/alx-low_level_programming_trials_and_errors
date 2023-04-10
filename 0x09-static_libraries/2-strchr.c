#include <stdio.h>
#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: pointer string
 * @c: the character
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int j;

	for (j = 0; s[j] >= '\0'; j++)
	{
		if (s[j] == c)
			return (s + j);
	}

	return (NULL);
}
