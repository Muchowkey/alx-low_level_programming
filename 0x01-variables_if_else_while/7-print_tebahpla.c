#include <stdio.h>

/**
 * main - entry point
 * Description: prints lowercase letters in reverse
 * Return: 0
 */

int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}

	putchar('\n');
	return (0);
}
