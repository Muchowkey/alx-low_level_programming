#include <stdio.h>

/**
 * main - entry point
 * Description: prints all letters except q and e
 * Return: 0
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
			putchar(ch);
	}

	putchar('\n');
	return (0);
}
