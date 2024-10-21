#include <stdio.h>

/**
 * main - prints single digit numbers of base 10
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i; /* Declare integer variable */

for (i = 0; i < 10; i++)
{
putchar(i + '0'); /* Convert integer to ASCII character */
}
putchar('\n'); /* Print a new line */

return (0); /* Return success */
}

