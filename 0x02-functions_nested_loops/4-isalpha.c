#include "main.h"

/**
 * _isalpha - to check lower case
 *@c: the char to be checked
 * Return: 1 if c or 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}