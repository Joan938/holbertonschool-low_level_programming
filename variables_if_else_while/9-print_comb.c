#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;

for (i = 0; i < 10; i++)
{
putchar(i + '0'); /* Print the current number */
if (i < 9)
{
putchar(','); /* Print a comma */
putchar(' '); /* Print a space */
}
}
putchar('\n'); /* Print a new line */

return (0); /* Return success */
}

