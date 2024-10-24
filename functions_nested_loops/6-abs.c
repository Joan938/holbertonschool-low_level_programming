#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: The integer to compute the absolute value for
 *
 * Return: The absolute value of n
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	return (n);
}
