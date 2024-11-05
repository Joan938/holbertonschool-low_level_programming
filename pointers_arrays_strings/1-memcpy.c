#include "main.h"

/**
 * _memcpy - Copies memory area.
 * @dest: The destination memory area to copy to.
 * @src: The source memory area to copy from.
 * @n: The number of bytes to copy.
 *
 * Return: A pointer to the destination memory area (dest).
 *
**/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
