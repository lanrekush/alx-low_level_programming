#include <stdio.h>

/**
 * main - rev alphabet
 *
 * Return: 0
 */

int main(void)
{
	int x = 0;

	for (x = 'z'; x >= 'a'; x--)
		putchar(x);

	putchar('\n');

	return (0);
}
