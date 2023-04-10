#include <stdio.h>
#include "main.h"

/**
 * _strpbrk -  function locates the first occurrence in the string s
 * @s: pointer to the byte
 * @accept: string input
 * Return: Always 0 (Success)
 */

char *_strpbrk(char *s, char *accept)
{
	int j, n;

	for (j = 0; s[j] != '\0'; j++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[j] == accept[n])
				return (s + j);
		}
	}
	return (NULL);
}
