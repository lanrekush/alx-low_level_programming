#include <stdio.h>

/**
 * main - print base 10
 *
 * Return: 0 value
 */

int main(void)
{
	int x = 0;

	for (x = 0; x < 10; x++)
		putchar((x % 10) + '0');

	putchar('\n');
	return (0);
}
