#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to be scanned.
 * @accept: The substring of characters to match in the initial segment of s.
 *
 * Return: The number of bytes in the initial segment of
 * s which consist only of by.
**/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				count++;
				break;
			}
		}

		if (accept[i] == '\0')
		{
			break;
		}

		s++;
	}

	return (count);
}
