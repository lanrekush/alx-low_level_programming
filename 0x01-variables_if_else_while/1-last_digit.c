#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assign a random number to a variable n and
 * picks the last digit of the number
 *
 * Return: Always 0
 *
 * betty style doc for function main goes there
 */

int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;

	if (m > 0)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, m);
	}
	else if (m == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, m);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
	}
	return (0);
}
