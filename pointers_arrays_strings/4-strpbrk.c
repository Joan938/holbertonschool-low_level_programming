#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to be searched.
 * @accept:  The set of bytes to search for in s.
 *
 * Return: A pointer to the byte in s that matches one of the bytes in accept,
 * Or NULL if no such byte is found.
**/

char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *a = accept;

		while (*a)
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}

		s++;
	}

	return (NULL);
}
