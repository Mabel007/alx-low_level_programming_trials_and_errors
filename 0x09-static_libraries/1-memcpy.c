#include "main.h"

/**
 * _memcpy - function that copies memory area.
 * @dest: the destination
 * @src: the memory area
 * @n: the bytes to be copied
 * Return: the pointer to the destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
