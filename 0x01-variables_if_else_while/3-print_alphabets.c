#include <stdio.h>

/**
 * main - print alphabet in lowercase
 *
 * Return: 0 as the value
*/

int main(void)
{
	int x;

	for (x = 'A'; x <= 'z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}

