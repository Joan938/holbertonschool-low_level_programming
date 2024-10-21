#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
char hex_chars[] = "0123456789abcdef";

for (i = 0; i < 16; i++)
{
putchar(hex_chars[i]); /* Print hexadecimal characters */
}
putchar('\n'); /* Print a new line */

return (0); /* Return success */
}

