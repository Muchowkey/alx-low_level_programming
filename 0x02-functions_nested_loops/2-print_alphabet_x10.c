#include "main.h"

/**
 * print_alphabetx10 - Entry Point
 * Description: Prints lowercase alphabets 10 times
 * Return: Always 0
 */

void print_alphabetx10(void)
{
	char ltr = 'a';

	while (ltr <= 'z')
	{
		_putchar(ltr);
		ltr++;
	}

	_putchar('\n');
}
