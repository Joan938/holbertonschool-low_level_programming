#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;

for (i = 25; i >= 0; i--)
{
putchar(i + 'a'); /* Convert integer to ASCII character */
}
putchar('\n'); /* Print a new line */

return (0); /* Return success */
}

