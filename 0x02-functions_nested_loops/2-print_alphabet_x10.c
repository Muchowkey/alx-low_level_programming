#include "main.h"

/**
 * print_alphabet_x10 - Entry Point
 * Description: Prints lowercase alphabets 10 times
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	char b;
	int i = 0;

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
