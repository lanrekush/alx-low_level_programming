#include "main.h"

/**
 * _islower - to check lower case
 * @c: is the parameter to be checked
 * Return: 1 if c or 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

