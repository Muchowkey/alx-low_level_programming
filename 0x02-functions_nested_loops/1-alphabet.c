#include "main.h"

/**
 * main - entry point
 * Description: Prints all lowercase letters
 * Return: Always 0
 */

void print_alphabet(void)
{
	char ltr = 'a';

	while (ltr <= 'z');
	{
		_putchar(ltr);
		ltr++;
	}

	_putchar('\n');
}
