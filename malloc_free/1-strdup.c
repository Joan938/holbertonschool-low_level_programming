#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: The string to duplicate.
 *
 * Return: A pointer to the duplicated string, or NULL
 * if memory allocation fails or if str is NULL.
 *
**/

char *_strdup(char *str)
{
	char *dup_str;
	unsigned int i, length;

	if (str == NULL)
		return (NULL);

	for (length = 0; str[length] != '\0'; length++)
		;

	dup_str = malloc(sizeof(char) * (length + 1));

	if (dup_str == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
		dup_str[i] = str[i];

	dup_str[i] = '\0';

	return (dup_str);
}
