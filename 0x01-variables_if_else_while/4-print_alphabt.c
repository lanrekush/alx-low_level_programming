#include <stdio.h>

/**
 * main - print all lowercase except q and e
 *
 * Return: 0 value
 */

int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x != 'e' && x != 'q')
			putchar(x);
	}

	putchar('\n');
	return (0);
}
