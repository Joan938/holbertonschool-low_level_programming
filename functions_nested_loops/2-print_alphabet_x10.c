#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i; /* Loop variable for outer loop */
	char c; /* Loop variable for inner loop */

	for (i = 0; i < 10; i++) /* Loop to print 10 times */
	{
		for (c = 'a'; c <= 'z'; c++) /* Loop through the alphabet */
		{
			_putchar(c);
		}
		_putchar('\n'); /* Print a new line after each alphabet set */
	}
}
