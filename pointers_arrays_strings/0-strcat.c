#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: The destination string
 * @src: The source string
 *
 * Return: A pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	/* Move to the end of dest */
	while (*ptr != '\0')
	{
		ptr++;
	}

	/* Append src to dest, overwriting the null byte */
	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}

	*ptr = '\0';  /* Add null terminator */
	return (dest);
}

