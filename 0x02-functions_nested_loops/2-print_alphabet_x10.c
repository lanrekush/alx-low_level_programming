#include "main.h"
/**
 *print_alphabet_x10 - alphabet
 *
 * Return : 0
 *
*/

void print_alphabet_x10(void)
{
	char alp;
	int x = 0;

	while (x < 10)
	{
		for (alp = 'a'; alp <= 'z'; alp++)
			_putchar(alp);
		_putchar('\n');
		x++;
	}
}
