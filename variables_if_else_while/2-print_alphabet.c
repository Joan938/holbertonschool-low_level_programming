#include <stdio.h>

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');  /* Print a new line */

	return (0);
}

