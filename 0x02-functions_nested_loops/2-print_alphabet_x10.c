#include "main.h"

/**
 * print_alphabetx10 - Entry Point
 * Description: Prints lowercase alphabets 10 times
 * Return: Always 0
 */

void print_alphabetx10(void)
{
	char b;
	int i;

	while (i <= 9)
	{
		for (b = 'a'; b <= 'z'; b++)
		{
			_putchar(b);
		}

		_putchar('\n');

		i++;
	}
}
