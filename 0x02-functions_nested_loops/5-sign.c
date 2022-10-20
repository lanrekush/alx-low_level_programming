#include "main.h"
/**
 * print_sign - print the sign of a number
 * @n: is the number to be checked
 * Return: 1 and print + if n > 0
 *	0 and print 0 if n = 0
 *	-1 and print - if n < 0
 *
 */

int print_sign(int n)
{
	if (n > 0)
		putchar('+');
		return (1);
		putchar('\n');

	else if (n == 0)
		putchar('0');
		return (0);
		putchar('\n');

	else
		putchar('-1');
		return ('-1');
		putchar('\n'0;
}
