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
	{
		_putchar('+');
		return (1);
		_putchar('\n');
	}

	else if (n == 0)
	{
		_putchar('0');
		return (0);
		_putchar('\n');
	}

	else
	{
		_putchar('-');
		return (-1);
		_putchar('\n');
	}
}
